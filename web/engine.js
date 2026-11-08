// Campus Conquest (2001) web engine.
//
// A re-implementation of the original DirectDraw engine (Campus-Conquest-v2.1.exe), rebuilt from a
// Ghidra decompile of that executable. It reads the original, unmodified mapData.txt. Numbers in
// here (screen rectangles, sprite positions, timings, puzzle rules) come straight from the
// decompiled code, so the game behaves the way it did in 2001. Comments name the original
// function addresses (FUN_00xxxxxx) where that helps cross-reference the decompile.
'use strict';

const SCREEN_WIDTH = 640;
const SCREEN_HEIGHT = 480;
const VIEWPORT_LEFT = 70;   // in-game pictures (500x375) are drawn at (70, 50)
const VIEWPORT_TOP = 50;

const canvas = document.getElementById('screen');
const context = canvas.getContext('2d');

// ---------------------------------------------------------------------------------------------
// Cursors, extracted from the .exe's resources. Index order matches the engine's cursor table.
const CURSOR_HOTSPOTS = { 104: [14, 19], 105: [14, 1], 131: [1, 16], 132: [30, 16], 133: [1, 1], 135: [0, 10] };
const cursorCss = (resourceId) => {
  const [hotspotX, hotspotY] = CURSOR_HOTSPOTS[resourceId];
  return `url(assets/cursors/cursor${resourceId}.png) ${hotspotX} ${hotspotY}, default`;
};
const CURSOR_BY_ID = [cursorCss(105), cursorCss(104), cursorCss(131), cursorCss(132)]; // forward, back, left, right
const CURSOR_ARROW = cursorCss(133);
const CURSOR_MENU = cursorCss(135);
let requestedCursor = CURSOR_ARROW;
const setCursor = (css) => { requestedCursor = css; };

// ---------------------------------------------------------------------------------------------
// Settings (the top of mapData.txt) and the menu's Music / Sound toggles.
const settings = { MUSIC: true, SOUND: true, SHOW_INTRO: true };

// ---------------------------------------------------------------------------------------------
// Audio. Sound effects are the original WAVs; MIDI music was rendered to MP3 at build time.
let audioContext = null;
const audioBuffers = new Map();
const playingSounds = new Set();

async function loadAudioBuffer(url) {
  if (!audioBuffers.has(url)) {
    audioBuffers.set(url, fetch(url)
      .then((response) => { if (!response.ok) throw new Error(`${response.status} ${url}`); return response.arrayBuffer(); })
      .then((bytes) => audioContext.decodeAudioData(bytes))
      .catch((error) => { console.warn('Could not load audio', url, error); return null; }));
  }
  return audioBuffers.get(url);
}

const soundUrl = (name) => `assets/sounds/${name.toLowerCase()}`;
const musicUrl = (name) => `assets/music/${name.toLowerCase().replace(/\.mid$/, '.mp3')}`;

// Plays a sound effect; resolves when it finishes (used by the elevator "wait for sound" state).
async function playSound(name) {
  if (!settings.SOUND || !audioContext) return;
  const buffer = await loadAudioBuffer(soundUrl(name));
  if (!buffer) return;
  const source = audioContext.createBufferSource();
  source.buffer = buffer;
  source.connect(audioContext.destination);
  playingSounds.add(source);
  // Resolve on 'ended', or after the sound's length if the browser never fires it (suspended audio).
  const finished = new Promise((resolve) => {
    const done = () => { playingSounds.delete(source); resolve(); };
    source.onended = done;
    setTimeout(done, buffer.duration * 1000 + 250);
  });
  source.start();
  return finished;
}

function stopAllSounds() { // FUN_00407850
  for (const source of playingSounds) { try { source.stop(); } catch (_) { /* already stopped */ } }
  playingSounds.clear();
}

const music = { currentName: null, source: null };

function isMusicPlaying(name) {
  return music.source !== null && music.currentName === name;
}

function stopMusic() { // FUN_00407b00
  if (music.source) { try { music.source.stop(); } catch (_) { /* already stopped */ } }
  music.source = null;
}

async function playMusic(name) { // FUN_00407a80; the original's main loop restarts finished tracks, so loop.
  stopMusic();
  music.currentName = name;
  if (!settings.MUSIC || !audioContext || !name) return;
  const buffer = await loadAudioBuffer(musicUrl(name));
  if (!buffer || music.currentName !== name || music.source) return;
  const source = audioContext.createBufferSource();
  source.buffer = buffer;
  source.loop = true;
  source.connect(audioContext.destination);
  source.start();
  music.source = source;
}

// ---------------------------------------------------------------------------------------------
// Images.
const imageCache = new Map();
function loadImage(url) {
  if (!imageCache.has(url)) {
    imageCache.set(url, new Promise((resolve) => {
      const image = new Image();
      image.onload = () => resolve(image);
      image.onerror = () => { console.warn('Missing image', url); resolve(null); };
      image.src = url;
    }));
  }
  return imageCache.get(url);
}
const pictureUrl = (dibName) => `assets/images/${dibName.toLowerCase().replace(/\.dib$/, '')}.png`;
const spriteUrl = (name) => `assets/sprites/${name}.png`;

const SPRITE_NAMES = [
  'title-new', 'title-load', 'title-exit', 'queen', 'disk-marker',
  ...Array.from({ length: 15 }, (_, value) => `box-${value}`),
  ...Array.from({ length: 10 }, (_, value) => `array-card-${value}`),
  ...Array.from({ length: 10 }, (_, value) => `array-digit-${value}`),
  ...Array.from({ length: 5 }, (_, index) => `pres-${index}`),
  ...Array.from({ length: 5 }, (_, index) => `disk-${index + 1}`),
];
const sprites = {};

// ---------------------------------------------------------------------------------------------
// Timing helpers. The original busy-waited (freezing input); `busy` reproduces that.
const sleep = (milliseconds) => new Promise((resolve) => setTimeout(resolve, milliseconds));
let busy = false;
let timeMark = 0;
const markTime = () => { timeMark = performance.now(); };                       // FUN_00401790
const waitSinceMark = (milliseconds) => sleep(Math.max(0, timeMark + milliseconds - performance.now())); // FUN_004017a0

// ---------------------------------------------------------------------------------------------
// Rendering. The engine draws one picture plus the current puzzle's sprites, like FUN_004035f0.
const STATE = { GAME: 0, PUZZLE: 1, MENU: 2, TITLE: 3, ENDING: 5, WAIT_SOUND: 6, INTRO: 7 };
let state = STATE.INTRO;
let currentPicture = null;        // { image, fullScreen }
let overlay = { color: '#000', alpha: 0 };
const titleHighlights = { new: false, load: false, exit: false };

const isFullScreenState = () => state === STATE.TITLE || state === STATE.ENDING || state === STATE.INTRO;

async function showPicture(dibName) { // FUN_00403540
  const image = await loadImage(pictureUrl(dibName));
  currentPicture = { image, fullScreen: isFullScreenState() };
  overlay.alpha = 0;
  render();
}

function render() {
  context.fillStyle = '#000';
  context.fillRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
  if (currentPicture && currentPicture.image) {
    if (currentPicture.fullScreen) context.drawImage(currentPicture.image, 0, 0);
    else context.drawImage(currentPicture.image, VIEWPORT_LEFT, VIEWPORT_TOP);
  }
  if (state === STATE.TITLE) {
    if (titleHighlights.new) context.drawImage(sprites['title-new'], 270, 450);
    if (titleHighlights.load) context.drawImage(sprites['title-load'], 380, 450);
    if (titleHighlights.exit) context.drawImage(sprites['title-exit'], 500, 450);
  }
  if (state === STATE.PUZZLE && activePuzzle) activePuzzle.draw();
  if (overlay.alpha > 0) {
    context.globalAlpha = overlay.alpha;
    context.fillStyle = overlay.color;
    context.fillRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
    context.globalAlpha = 1;
  }
}

// FUN_00401e30 effects 0 and 1: palette fades to black (80 steps) and towards white (64 steps), 12 ms each.
async function fadeTo(color) {
  const steps = color === '#000' ? 80 : 64;
  overlay = { color, alpha: 0 };
  for (let step = 1; step <= steps; step += 1) {
    overlay.alpha = step / steps;
    render();
    await sleep(12);
  }
}

// ---------------------------------------------------------------------------------------------
// mapData.txt parser (FUN_00404890 / FUN_00405190).
// Predefined hotzones (FUN_00405610), in screen coordinates, with their default cursor.
const PREDEFINED_ZONES = {
  forward: { rect: [170, 130, 470, 345], cursor: 0 },
  down: { rect: [120, 385, 520, 425], cursor: 1 },
  left: { rect: [70, 90, 120, 385], cursor: 2 },
  right: { rect: [520, 90, 570, 385], cursor: 3 },
  up: { rect: [120, 50, 520, 90], cursor: 0 },
};

function parseMapData(text) {
  const lines = text.split(/\r?\n/).map((line) => line.replace(/#.*/, ''));
  const tokens = lines.join(' ').split(/\s+/).filter(Boolean);
  const screens = new Map();
  let startName = null;
  let index = 0;
  const next = () => tokens[index++];

  while (index < tokens.length) {
    const token = next();
    if (token === 'end') break;
    if (token === 'start') { startName = next(); continue; }
    if (token === 'LOG' || token === 'LOG_MAP_BUILD' || token === 'LOG_MOUSE_CLICKS' || token === 'SCREEN_OUTPUT') { next(); continue; }
    if (token === 'MUSIC' || token === 'SOUND' || token === 'SHOW_INTRO') { settings[token] = next() === 'ON'; continue; }
    if (token !== 'scrn') { console.warn('Unknown token in mapData.txt:', token); continue; }

    const screen = { name: next(), image: null, music: null, zones: [] };
    if (next() !== '{') throw new Error(`Missing '{' after scrn ${screen.name}`);
    for (let word = next(); word !== '}' && word !== undefined; word = next()) {
      if (word === 'img') { screen.image = next(); continue; }
      if (word === 'music') { screen.music = next(); continue; }
      const predefined = PREDEFINED_ZONES[word];
      if (!predefined && word !== 'hotzone') { console.warn(`Unknown token ${word} in scrn ${screen.name}`); continue; }
      if (next() !== '<') throw new Error(`Missing '<' in scrn ${screen.name}`);
      // One hotzone holds a single action (link / puzzle / set / exit): the last one written wins.
      const zone = { rect: predefined ? predefined.rect : null, cursor: predefined ? predefined.cursor : 0,
                     action: null, data: null, sound: null };
      for (let part = next(); part !== '>'; part = next()) {
        if (part === 'rect') {
          const [left, top, right, bottom] = [next(), next(), next(), next()].map(Number);
          zone.rect = [left + VIEWPORT_LEFT, top + VIEWPORT_TOP, right + VIEWPORT_LEFT, bottom + VIEWPORT_TOP];
        } else if (part === 'link' || part === 'puzzle' || part === 'set' || part === 'exit') {
          zone.action = part; zone.data = next();
        } else if (part === 'sound') zone.sound = next();
        else if (part === 'cursor') zone.cursor = Number(next());
        else console.warn(`Unknown hotzone token ${part} in scrn ${screen.name}`);
      }
      screen.zones.push(zone);
    }
    screens.set(screen.name.toLowerCase(), screen);
  }
  for (const screen of screens.values()) {
    for (const zone of screen.zones) {
      if (zone.action === 'link' && !screens.has(zone.data.toLowerCase())) console.warn(`Unknown link ${zone.data} in scrn ${screen.name}`);
    }
  }
  return { screens, startName };
}

// ---------------------------------------------------------------------------------------------
// The world: screens can be rebound at run time by "set A=B", which copies B's picture, music and
// hotzones into A (FUN_004057d0). Every set is logged so a save game can replay them.
let mapDataText = '';
let world = null;
let currentScreen = null;
let setLog = [];

function screenNamed(name) {
  const screen = world.screens.get(name.toLowerCase());
  if (!screen) throw new Error(`Unknown screen ${name}`);
  return screen;
}

function resetWorld() { // FUN_004044e0: rebuild the map from mapData.txt
  world = parseMapData(mapDataText);
  setLog = [];
  currentScreen = screenNamed(world.startName);
}

function applySet(targetName, sourceName) {
  const target = screenNamed(targetName);
  const source = screenNamed(sourceName);
  target.image = source.image;
  target.music = source.music;
  target.zones = source.zones.map((zone) => ({ ...zone }));
  setLog.push([targetName, sourceName]);
}

// ---------------------------------------------------------------------------------------------
// Save / load (campus.sav in the original; localStorage here).
const SAVE_KEY = 'campus-conquest-save';

function saveGame() { // FUN_004047e0
  const save = { node: currentScreen.name, music: music.currentName, sets: setLog };
  try { localStorage.setItem(SAVE_KEY, JSON.stringify(save)); } catch (error) { console.warn('Could not save', error); }
}

function loadGame() { // FUN_004045a0
  let save = null;
  try { save = JSON.parse(localStorage.getItem(SAVE_KEY)); } catch (_) { save = null; }
  if (!save) return;
  for (const [target, source] of save.sets) applySet(target, source);
  currentScreen = screenNamed(save.node);
  if (save.music) { stopMusic(); music.currentName = save.music; } // curMidiId in campus.sav
}

// ---------------------------------------------------------------------------------------------
// Moving around the campus.
async function changeMusicForScreen(screen) {
  if (screen.music && !isMusicPlaying(screen.music)) {
    stopMusic();
    await sleep(500); // FUN_00406110(500)
    playMusic(screen.music);
  }
}

async function showCurrentScreen() { // FUN_00406140
  await showPicture(currentScreen.image || 'missing.dib');
  if (currentScreen.music && !isMusicPlaying(currentScreen.music)) playMusic(currentScreen.music);
  // Most screens carry no music of their own. The original's main loop (FUN_00403470) restarted
  // the current track whenever it had stopped, which is how music came back after the menu.
  else if (!currentScreen.music && music.currentName && !music.source) playMusic(music.currentName);
  prefetchNeighbours(currentScreen);
}

function prefetchNeighbours(screen) {
  for (const zone of screen.zones) {
    if (zone.action !== 'link') continue;
    const neighbour = world.screens.get(zone.data.toLowerCase());
    if (neighbour && neighbour.image) loadImage(pictureUrl(neighbour.image));
  }
}

const ELEVATOR_SOUNDS = new Set(['elevatorrun.wav', 'elevatoropen.wav', 'elevatorrun2.wav']);
const pointInRect = ([left, top, right, bottom], x, y) => left <= x && top <= y && x <= right && y <= bottom;

async function gameMouse(x, y, isClick) { // FUN_00405a90
  if (y < 50) {
    if (!isClick) { setCursor(CURSOR_MENU); return; }
    await openMenu();
    return;
  }
  let hoverCursor = null;
  for (const zone of currentScreen.zones) {
    if (!zone.rect || !pointInRect(zone.rect, x, y)) continue;
    if (!isClick) { hoverCursor = CURSOR_BY_ID[zone.cursor] || CURSOR_ARROW; continue; }
    await clickZone(zone);
    return;
  }
  setCursor(hoverCursor || CURSOR_ARROW);
}

async function clickZone(zone) {
  if (zone.sound) {
    const finished = playSound(zone.sound);
    if (ELEVATOR_SOUNDS.has(zone.sound.toLowerCase())) waitForSound(finished);
  }
  if (zone.action === 'link') {
    currentScreen = screenNamed(zone.data);
    await changeMusicForScreen(currentScreen);
    if (currentScreen.name.toLowerCase() === 'winner') {
      state = STATE.ENDING;
      await fadeTo('#fff');
    }
    await showPicture(currentScreen.image || 'missing.dib');
    prefetchNeighbours(currentScreen);
    // Story triggers hard-coded in the engine, applied when arriving at these screens.
    const arrived = currentScreen.name.toLowerCase();
    if (arrived === 'letter') applySet('unionExitClosed', 'unionExitUnlocked');
    else if (arrived === 'ru7-ru6') applySet('box', 'boxWithKey');
    else if (arrived === 'boxwithoutkey') applySet('unionHallClose', 'gotKey');
  } else if (zone.action === 'set') {
    const [target, source] = zone.data.split('=');
    applySet(target, source);
  } else if (zone.action === 'puzzle') {
    await startPuzzle(zone.data[0]);
  } else if (zone.action === 'exit') {
    await quitGame();
  }
}

async function waitForSound(finished) { // state WAIT_SOUND: input ignored until the elevator sound ends
  state = STATE.WAIT_SOUND;
  canvas.style.cursor = 'none';
  await (finished || Promise.resolve());
  if (state === STATE.WAIT_SOUND) state = STATE.GAME;
  await gameMouse(300, 240, false);
}

// ---------------------------------------------------------------------------------------------
// Title screen (FUN_00402e60), in-game menu (FUN_00402c30), ending and quitting.
const TITLE_BUTTONS = {
  new: [271, 451, 349, 469],
  load: [381, 451, 459, 469],
  exit: [501, 451, 579, 469],
};

async function showTitle() {
  state = STATE.TITLE;
  titleHighlights.new = titleHighlights.load = titleHighlights.exit = false;
  await showPicture('titleScreen.dib');
}

async function titleMouse(x, y, isClick) {
  const hovered = Object.keys(TITLE_BUTTONS).find((key) => pointInRect(TITLE_BUTTONS[key], x, y)) || null;
  if (!isClick) {
    let changed = false;
    for (const key of Object.keys(titleHighlights)) {
      const highlighted = key === hovered;
      if (titleHighlights[key] !== highlighted) { titleHighlights[key] = highlighted; changed = true; }
    }
    if (changed) render();
    return;
  }
  if (hovered === 'exit') await quitGame();
  else if (hovered === 'load') await beginGame({ fromSave: true });
  else if (hovered === 'new') await beginGame({ fromSave: false });
}

async function beginGame({ fromSave }) {
  stopAllSounds();
  state = STATE.GAME;
  await fadeTo('#000');
  resetWorld();
  if (fromSave) loadGame();
  await showCurrentScreen();
}

async function openMenu() { // FUN_00403b90("MENU")
  state = STATE.MENU;
  await fadeTo('#000');
  stopAllSounds();
  stopMusic();
  await showPicture('menu.dib');
}

async function menuMouse(x, y, isClick) {
  if (!isClick) return;
  if (x > 270 && x < 352) {
    if (y > 286 && y < 311) { await quitGame(); return; }
    if (y > 175 && y < 200) { saveGame(); playSound('click.wav'); return; }
    if (y > 200 && y < 228) { await leaveMenu(() => { resetWorld(); loadGame(); }); return; }
    if (y > 228 && y < 253) { await leaveMenu(() => resetWorld()); return; }
  }
  if (x > 195 && y > 351 && x < 431 && y < 402) { await leaveMenu(() => {}); return; }
  if (x > 97 && y > 314 && x < 223 && y < 346) {
    settings.MUSIC = !settings.MUSIC;
    playSound('click.wav');
    return;
  }
  if (x > 408 && y > 317 && x < 540 && y < 344) {
    settings.SOUND = !settings.SOUND;
    playSound('click.wav');
  }
}

async function leaveMenu(prepareWorld) {
  state = STATE.GAME;
  await fadeTo('#000');
  stopAllSounds();
  prepareWorld();
  await showCurrentScreen();
}

async function quitGame() { // FUN_00403c80: fade out and close. On the web, go back to the title screen.
  await fadeTo('#000');
  stopAllSounds();
  stopMusic();
  music.currentName = null;
  await sleep(400);
  await showTitle();
}

// ---------------------------------------------------------------------------------------------
// Puzzles. Each one keeps its "solved" flag for the session, like the original puzzle objects.
let activePuzzle = null;
let activePuzzleLetter = null;
const puzzles = {};

async function startPuzzle(letter) { // FUN_00406960
  const puzzle = puzzles[letter];
  if (!puzzle) { console.warn('Unknown puzzle', letter); return; }
  state = STATE.PUZZLE;
  activePuzzle = puzzle;
  activePuzzleLetter = letter;
  puzzle.exitRequested = false;
  await puzzle.start();
}

async function puzzleMouse(x, y, isClick) { // window procedure, PUZZLE case
  await activePuzzle.mouse(x, y, isClick);
  if (activePuzzle && activePuzzle.exitRequested) {
    if (activePuzzle.solved) applySet(`${activePuzzle.resultName}_result`, `${activePuzzle.resultName}_solved`);
    activePuzzle = null;
    state = STATE.GAME;
    await showCurrentScreen();
  }
}

async function startPuzzleMusic() {
  if (music.currentName !== 'midifile7.mid' || !music.source) playMusic('midifile7.mid');
}

// Box game (B): a 15-puzzle spelling a Greek inscription. Board is stored column-major, -1 = empty.
puzzles.B = {
  resultName: 'BoxGame', solved: false, exitRequested: false, board: null,
  async start() { // FUN_00402800
    if (!this.solved) this.board = [13, 9, 4, 14, 12, 3, 11, 5, 8, 7, 0, 1, 10, 2, 6, -1];
    playMusic('midifile7.mid');
    await showPicture('boxBkgd.dib');
  },
  draw() { // FUN_004027a0: tile at column x, row y is drawn at (214 + 50x, 111 + 50y)
    for (let column = 0; column < 4; column += 1) {
      for (let row = 0; row < 4; row += 1) {
        const tile = this.board[column * 4 + row];
        if (tile >= 0) context.drawImage(sprites[`box-${tile}`], 214 + 50 * column, 111 + 50 * row);
      }
    }
  },
  isSolved() { // FUN_00402670: tiles 6 and 11 look identical, so either may sit in either spot
    for (let column = 0; column < 4; column += 1) {
      for (let row = 0; row < 4; row += 1) {
        const tile = this.board[column * 4 + row];
        if (column === 3 && row === 3) { if (tile !== -1) return false; }
        else if ((column === 3 && row === 2) || (column === 2 && row === 1)) { if (tile !== 6 && tile !== 11) return false; }
        else if (tile !== row * 4 + column) return false;
      }
    }
    return true;
  },
  async mouse(x, y, isClick) { // FUN_004024d0
    const column = x > 213 && x < 415 ? Math.trunc((x - 214) / 50) : -1;
    const row = y > 110 && y < 312 ? Math.trunc((y - 111) / 50) : -1;
    if (!isClick || this.solved || column < 0 || row < 0) {
      if (x > 425 && x < 448 && y > 373 && y < 391) {
        if (isClick) this.exitRequested = true; else setCursor(CURSOR_BY_ID[0]);
      }
      return;
    }
    const neighbours = [[column - 1, row], [column, row - 1], [column + 1, row], [column, row + 1]];
    const empty = neighbours.find(([c, r]) => c >= 0 && c < 4 && r >= 0 && r < 4 && this.board[c * 4 + r] === -1);
    if (empty) {
      this.board[empty[0] * 4 + empty[1]] = this.board[column * 4 + row];
      this.board[column * 4 + row] = -1;
      playSound('click.wav');
      this.solved = this.isSolved();
      if (this.solved) playSound('win.wav');
    } else {
      playSound('buzzer.wav');
    }
    await showPicture('boxBkgd.dib');
  },
};

// Array game (A): take a card from either end of the row, then the computer takes one; beat its total.
const ARRAY_CARD_VALUES = [4, 6, 5, 4, 6, 5, 7, 7, 5, 3];
puzzles.A = {
  resultName: 'ArrayGame', solved: false, exitRequested: false,
  start() { // FUN_00404120
    if (!this.solved) {
      Object.assign(this, { finished: false, low: 0, high: 9, playerScore: 0, computerScore: 0 });
      this.cardVisible = ARRAY_CARD_VALUES.map(() => true);
    }
    startPuzzleMusic();
    return showPicture('arrayBkgd.dib');
  },
  draw() {
    ARRAY_CARD_VALUES.forEach((value, index) => {
      if (this.cardVisible[index]) context.drawImage(sprites[`array-card-${value}`], 75 + 50 * index, 200);
    });
    const digits = [Math.trunc(this.playerScore / 10), this.playerScore % 10,
                    Math.trunc(this.computerScore / 10), this.computerScore % 10];
    [130, 170, 430, 470].forEach((digitX, index) => context.drawImage(sprites[`array-digit-${digits[index]}`], digitX, 85));
  },
  takeCard(byPlayer, index) { // FUN_00403fb0
    if (byPlayer) this.playerScore += ARRAY_CARD_VALUES[index]; else this.computerScore += ARRAY_CARD_VALUES[index];
    if (index === this.low) this.low += 1; else this.high -= 1;
    if (this.high < this.low) {
      this.finished = true;
      this.solved = this.computerScore < this.playerScore;
      if (this.solved) playSound('dconnect.wav');
    }
  },
  // FUN_00404040, the computer's choice, translated as written in 2001 (it mixes card values and
  // indices in its recursion, so it is not a perfect player; that quirk is part of the game).
  computerChoice(first, last) {
    if (this.high === this.low) return this.high;
    if (last === first) return ARRAY_CARD_VALUES[last];
    const inner = this.computerChoice(first + 1, last - 1);
    const leftTwo = this.computerChoice(first + 2, last);
    const rightTwo = this.computerChoice(first, last - 2);
    const firstValue = ARRAY_CARD_VALUES[first];
    const lastValue = ARRAY_CARD_VALUES[last];
    const takeFirst = Math.min(firstValue + leftTwo, firstValue + inner);
    const takeLast = Math.min(lastValue + inner, lastValue + rightTwo);
    const best = Math.max(takeFirst, takeLast);
    if (takeFirst === best) {
      if (takeLast === best && Math.max(firstValue, lastValue) !== firstValue) return this.high;
      return this.low;
    }
    if (takeLast === best) return this.high;
    return 0;
  },
  async playerTakes(takeLow) { // FUN_00403cf0
    const playerIndex = takeLow ? this.low : this.high;
    this.cardVisible[playerIndex] = false;
    this.takeCard(true, playerIndex);
    await showPicture('arrayBkgd.dib');
    playSound('click.wav');
    markTime();
    const computerIndex = this.computerChoice(this.low, this.high);
    this.cardVisible[computerIndex] = false;
    this.takeCard(false, computerIndex);
    await waitSinceMark(1000);
    playSound('click.wav');
    await showPicture('arrayBkgd.dib');
    if (this.solved) {
      await waitSinceMark(2000);
      playSound('win.wav');
    } else if (this.finished) {
      await waitSinceMark(2000);
      playSound('buzzer.wav');
      await waitSinceMark(3000);
      await this.start();
    }
  },
  async mouse(x, y, isClick) { // FUN_00403e30 / FUN_00403f10
    let pick = 0;
    if (y > 199 && y < 241 && x > 74) {
      const index = Math.trunc((x - 75) / 50);
      if (index === this.low) pick = 2; else if (index === this.high) pick = 1;
      if ((x - 75) % 50 > 39) pick = -1;
      else if (isClick && pick === 0 && this.low < index && index < this.high) playSound('buzzer.wav');
    }
    if (isClick && !this.solved && pick > 0) { await this.playerTakes(pick === 2); return; }
    if (x > 120 && x < 520 && y > 405) {
      if (isClick) this.exitRequested = true; else setCursor(CURSOR_BY_ID[1]);
    }
  },
};

// Presidents (P): click a portrait to swap it with the one on its right; put them in order.
puzzles.P = {
  resultName: 'PresPuzzle', solved: false, exitRequested: false, order: null,
  start() { // FUN_004065b0
    if (!this.solved) this.order = [3, 4, 0, 2, 1];
    startPuzzleMusic();
    return showPicture('presPuzzleBkgd.dib');
  },
  draw() { // FUN_00406540: slot k is at x = 122 + 80k
    this.order.forEach((portrait, slot) => context.drawImage(sprites[`pres-${portrait}`], 122 + 80 * slot, 200));
  },
  slotAt(x, y) { // FUN_004067b0
    if (y <= 199 || y >= 301) return -1;
    if (x < 198) return 0;
    if (x > 201 && x < 278) return 1;
    if (x > 281 && x < 358) return 2;
    if (x > 361 && x < 438) return 3;
    return -1;
  },
  async mouse(x, y, isClick) { // FUN_00406710
    const slot = this.slotAt(x, y);
    if (isClick && !this.solved && slot >= 0) {
      [this.order[slot], this.order[slot + 1]] = [this.order[slot + 1], this.order[slot]];
      if (this.order.every((portrait, index) => portrait === index)) { this.solved = true; playSound('win.wav'); }
      await showPicture('presPuzzleBkgd.dib');
      playSound('click.wav');
      return;
    }
    if (x > 120 && x < 520 && y > 375 && y < 425) {
      if (isClick) this.exitRequested = true; else setCursor(CURSOR_BY_ID[1]);
    }
  },
};

// Eight queens (E): place eight queens on the board so that none attack each other.
puzzles.E = {
  resultName: 'EightQueens', solved: false, exitRequested: false,
  start() { // FUN_00406ff0
    if (!this.solved) {
      this.attacks = new Array(64).fill(0);   // indexed column * 8 + row
      this.hasQueen = new Array(64).fill(false);
      this.placed = 0;
      this.queens = Array.from({ length: 8 }, (_, index) => ({ x: (index % 2) * 40 + 485, y: 71 + 39 * index, onBoard: false }));
    }
    playMusic('midifile7.mid');
    return showPicture('queensBkgd.dib');
  },
  draw() {
    for (const queen of this.queens) context.drawImage(sprites.queen, queen.x, queen.y);
  },
  markLines(column, row, delta) { // FUN_00406dd0 / FUN_00406ec0: own square plus all eight directions
    const inside = (c, r) => c >= 0 && c < 8 && r >= 0 && r < 8;
    const bump = (c, r) => {
      const index = c * 8 + r;
      if (delta > 0) this.attacks[index] += 1; else if (this.attacks[index] > 0) this.attacks[index] -= 1;
    };
    for (let dc = -1; dc < 2; dc += 1) {
      for (let dr = -1; dr < 2; dr += 1) {
        if (dc === 0 && dr === 0) { bump(column, row); continue; }
        for (let c = column + dc, r = row + dr; inside(c, r); c += dc, r += dr) bump(c, r);
      }
    }
  },
  async mouse(x, y, isClick) { // FUN_00406c80
    if (isClick && x > 130 && x < 445 && y > 75 && y < 396 && !this.solved) {
      const column = Math.trunc((x - 131) / 40);
      const row = Math.trunc((y - 76) / 39);
      const index = column * 8 + row;
      if (this.hasQueen[index]) {
        // FUN_00407290: take the queen in this column back to the tray.
        const queen = this.queens.find((q) => q.onBoard && q.x === column * 40 + 131);
        if (queen) Object.assign(queen, { x: ((this.placed + 1) % 2) * 40 + 485, y: this.placed * 39 + 32, onBoard: false });
        playSound('drip.wav');
        this.hasQueen[index] = false;
        this.placed -= 1;
        this.markLines(column, row, -1);
      } else if (this.attacks[index] < 1) {
        // FUN_004071f0: take the highest queen still in the tray.
        const free = this.queens.filter((q) => !q.onBoard && (q.y - 71) % 39 === 0 && q.y >= 71 && q.y < 383)
          .sort((a, b) => a.y - b.y || this.queens.indexOf(a) - this.queens.indexOf(b))[0];
        if (free) Object.assign(free, { x: column * 40 + 131, y: row * 39 + 46, onBoard: true });
        playSound('click.wav');
        this.hasQueen[index] = true;
        this.placed += 1;
        this.markLines(column, row, +1);
      } else {
        playSound('buzzer.wav');
      }
      if (this.placed === 8) {
        this.solved = true;
        playSound('win.wav');
        playMusic('midifile8.mid');
      }
      await showPicture('queensBkgd.dib');
      return;
    }
    if (x > 120 && x < 520 && y > 400) {
      if (isClick) this.exitRequested = true; else setCursor(CURSOR_BY_ID[1]);
    }
  },
};

// Towers of Hanoi (T): move all five disks off the first peg.
const TOWER_PEG_X = [135, 235, 335];
const TOWER_SLOT_Y = [275, 255, 235, 215, 195];
puzzles.T = {
  resultName: 'Towers', solved: false, exitRequested: false,
  start() { // FUN_00408060
    if (!this.solved) {
      this.pegs = [[5, 4, 3, 2, 1], [], []]; // bottom to top; 1 is the smallest disk
      this.selectedPeg = 0;                   // 1-based, 0 = nothing selected
    }
    startPuzzleMusic();
    return showPicture('towersBkgd.dib');
  },
  draw() { // FUN_00407fe0
    this.pegs.forEach((disks, peg) => disks.forEach((disk, slot) => context.drawImage(sprites[`disk-${disk}`], TOWER_PEG_X[peg], TOWER_SLOT_Y[slot])));
    if (this.selectedPeg) context.drawImage(sprites['disk-marker'], TOWER_PEG_X[this.selectedPeg - 1] + 45, 307);
  },
  pegAt(x, y) { // FUN_00407f80
    if (y <= 183 || y >= 304) return 0;
    if (x > 139 && x < 231) return 1;
    if (x > 239 && x < 331) return 2;
    if (x > 339 && x < 431) return 3;
    return 0;
  },
  async mouse(x, y, isClick) { // FUN_00407d10
    const peg = this.pegAt(x, y);
    if (!isClick || this.solved || peg === 0) {
      if (x > 120 && x < 520 && y > 375 && y < 425) {
        if (isClick) this.exitRequested = true; else setCursor(CURSOR_BY_ID[1]);
      }
      return;
    }
    if (this.selectedPeg === 0) {
      if (this.pegs[peg - 1].length === 0) playSound('buzzer.wav');
      else { this.selectedPeg = peg; playSound('select.wav'); }
    } else {
      const from = this.pegs[this.selectedPeg - 1];
      const to = this.pegs[peg - 1];
      if (to.length === 0 || from[from.length - 1] < to[to.length - 1]) { // FUN_00407e70
        to.push(from.pop());
        playSound('click.wav');
        this.solved = this.pegs[1].length === 5 || this.pegs[2].length === 5; // FUN_00407ec0
        if (this.solved) playSound('win.wav');
      } else {
        playSound('buzzer.wav');
      }
      this.selectedPeg = 0;
    }
    await showPicture('towersBkgd.dib');
  },
};

// ---------------------------------------------------------------------------------------------
// Input. Pointer positions are mapped back to the original 640x480 screen.
let inputQueue = Promise.resolve();

function toScreenPoint(event) {
  const bounds = canvas.getBoundingClientRect();
  return {
    x: Math.round(((event.clientX - bounds.left) / bounds.width) * SCREEN_WIDTH),
    y: Math.round(((event.clientY - bounds.top) / bounds.height) * SCREEN_HEIGHT),
  };
}

async function dispatchMouse(x, y, isClick) { // window procedure FUN_00402a10
  if (busy) return;
  if (isClick) busy = true;
  try {
    setCursor(CURSOR_ARROW);
    if (state === STATE.GAME || state === STATE.ENDING) await gameMouse(x, y, isClick);
    else if (state === STATE.PUZZLE) await puzzleMouse(x, y, isClick);
    else if (state === STATE.MENU) await menuMouse(x, y, isClick);
    else if (state === STATE.TITLE) await titleMouse(x, y, isClick);
    if (state === STATE.GAME && isClick) await gameMouse(x, y, false); // original re-ran hover after each message
    if (state === STATE.PUZZLE && isClick && activePuzzle) await activePuzzle.mouse(x, y, false);
  } finally {
    if (isClick) busy = false;
  }
  canvas.style.cursor = state === STATE.WAIT_SOUND ? 'none' : requestedCursor;
}

canvas.addEventListener('pointermove', (event) => {
  if (event.pointerType !== 'mouse' || busy) return;
  const { x, y } = toScreenPoint(event);
  dispatchMouse(x, y, false);
});
canvas.addEventListener('pointerdown', (event) => {
  event.preventDefault();
  const { x, y } = toScreenPoint(event);
  inputQueue = inputQueue.then(() => dispatchMouse(x, y, true)).catch((error) => console.error(error));
});
canvas.addEventListener('contextmenu', (event) => event.preventDefault());

function fitCanvasToWindow() {
  const scale = Math.min(window.innerWidth / SCREEN_WIDTH, window.innerHeight / SCREEN_HEIGHT);
  canvas.style.width = `${Math.floor(SCREEN_WIDTH * scale)}px`;
  canvas.style.height = `${Math.floor(SCREEN_HEIGHT * scale)}px`;
}
window.addEventListener('resize', fitCanvasToWindow);
fitCanvasToWindow();

// ---------------------------------------------------------------------------------------------
// Start-up (FUN_004031f0): the URI ram intro, then the title screen.
async function playIntro() {
  state = STATE.INTRO;
  playSound('intro.wav');
  await sleep(3600);
  await showPicture('ram.dib');
  markTime();
  await waitSinceMark(4800);
  await fadeTo('#000');
  await fadeTo('#fff');
  await showPicture('ram2.dib');
  markTime();
  await waitSinceMark(4800);
  await fadeTo('#000');
}

async function boot() {
  const response = await fetch('mapData.txt');
  if (!response.ok) throw new Error('Could not load mapData.txt');
  mapDataText = await response.text();
  resetWorld();
  const loaded = await Promise.all(SPRITE_NAMES.map((name) => loadImage(spriteUrl(name))));
  SPRITE_NAMES.forEach((name, index) => { sprites[name] = loaded[index]; });
  ['ram.dib', 'ram2.dib', 'titleScreen.dib', 'menu.dib'].forEach((name) => loadImage(pictureUrl(name)));
  return true;
}

const bootPromise = boot();
const startOverlay = document.getElementById('start');
startOverlay.addEventListener('pointerdown', async (event) => {
  event.preventDefault();
  startOverlay.classList.add('hidden');
  audioContext = new (window.AudioContext || window.webkitAudioContext)();
  await bootPromise;
  busy = true;
  if (settings.SHOW_INTRO) await playIntro();
  busy = false;
  await showTitle();
}, { once: true });
