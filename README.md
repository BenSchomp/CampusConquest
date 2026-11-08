# Campus Conquest

A first-person point-and-click adventure set on the University of Rhode Island campus, written in
2000–2001 for Windows (DirectDraw, DirectSound, DirectMusic) by Ben Schomp, Bob Rossi, Joel Hanks,
Val Dobrushkin and Scott Begin.

The original C++ source is on a Zip disk that can't currently be read, so this web version was
rebuilt from the original executable and data:

- `Campus_Conquest/`: the original game exactly as shipped (v2.1 exe, `mapData.txt`, images, sounds).
- `web/`: the browser version. A static site; open `web/index.html` from any web server.
- `tools/`: Python scripts that rebuild `web/assets` from `Campus_Conquest/`.
- `decompiled/`: the Ghidra decompile of `Campus-Conquest-v2.1.exe` that the web engine was written from.
- `tests/`: Playwright scripts that play through the menus and solve every puzzle.

## How the web version works

The 2001 engine is an interpreter for `mapData.txt`: each `scrn` block is a 500×375 photo with
hotzones (`forward`, `left`, `right`, `down`, or a custom `rect`) that link to other screens,
play sounds, rebind screens (`set A=B`) or start a puzzle. `web/engine.js` re-implements that
interpreter and reads the original `mapData.txt` unchanged.

Everything hard-coded in the exe was recovered from the decompile and ported as written: the
predefined hotzone rectangles, the title screen and menu buttons, the five puzzles (Box, Array,
Presidents, Eight Queens, Towers of Hanoi) including the computer's quirky Array-game strategy,
the story triggers (arriving at `letter`, `ru7-ru6` and `boxWithoutKey`), the elevator's
"wait for the sound to finish" state, the palette fades, and the intro. The cursors are the
original ones, extracted from the exe's resources. Saves go to the browser's localStorage
instead of `campus.sav`.

Known differences from 2001: MIDI music is pre-rendered with the FluidR3 General MIDI soundfont
(the original used the Microsoft GS Wavetable synth), and "Exit" returns to the title screen
instead of closing a window. The game opens on the black ram logo with "Click to start" under it,
because browsers only play sound after a click; the click starts the intro music, and the logo
dissolves to the white ram logo and then to the title screen. `bl3-q5` pointed at a picture that doesn't exist (`bl3-q4.dib`) and
showed black; the build now points it at `bl3-q5.dib` (see `MAP_DATA_FIXES` in
`tools/build_assets.py`). The sign above the library foyer doors linked to `lib1-letters`, whose
picture was never made, so the build removes that click spot. The light switch for the Towers of
Hanoi room was moved from the hallway (where it overlapped the turn-left strip) onto the wall beside
the dark doorway, and now switches the lights both on and off (`edit_light_switch_pictures`).
Where a hotzone overlaps a forward/left/right/down strip, the hotzone now always wins the click
and the pointer shows it; the 2001 engine clicked whichever came first in `mapData.txt` and showed
the last one's pointer, so some doors and switches showed a turn arrow or lost the click.

Two pointers were added in the same black-and-white style as the originals (`tools/draw_cursors.py`):
a magnifier for spots that take a closer look (mapData `cursor 4`) and a pointing hand for spots that
press or use something (`cursor 5`); the forward arrow is kept for walking. Which spot gets which is
listed in `HOTZONE_POINTERS` in `tools/build_assets.py`. A few click spots were resized to cover what
they show (`HOTZONE_RECT_CHANGES`), and the back of the library stone (`backstone`) gained a
turn-right strip.

## Rebuilding the assets

Needs Python 3 with Pillow, FluidSynth with the FluidR3_GM soundfont, and ffmpeg.

```sh
python3 tools/build_assets.py Campus_Conquest web
python3 tools/check_map.py Campus_Conquest      # reports broken links / missing pictures
```

## Running locally

```sh
cd web && python3 -m http.server 8000   # then open http://localhost:8000
```

## Running the original

The original exe runs under Wine 9 (tested on Linux). It needs a working audio device, because
it fails to start if DirectMusic can't initialise.
