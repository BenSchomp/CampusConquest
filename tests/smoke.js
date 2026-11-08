// Drives the web build: intro -> title -> new game -> walk -> menu -> each puzzle.
const { chromium } = require('playwright');
const shots = process.argv[2];
(async () => {
  const browser = await chromium.launch({ args: ['--autoplay-policy=no-user-gesture-required'] });
  const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  const errors = [];
  page.on('console', (m) => { if (m.type() === 'error' || m.type() === 'warning') errors.push(m.text()); });
  page.on('pageerror', (e) => errors.push('PAGEERROR ' + e.message));
  await page.goto('http://localhost:8765/index.html');
  await page.mouse.click(320, 240);           // start overlay
  await page.waitForTimeout(5000);
  await page.screenshot({ path: `${shots}/01-intro-ram.png` });
  await page.waitForTimeout(9000);
  await page.screenshot({ path: `${shots}/02-ram2.png` });
  await page.waitForTimeout(6500);
  await page.mouse.move(300, 460);
  await page.waitForTimeout(300);
  await page.screenshot({ path: `${shots}/03-title-hover-new.png` });
  await page.mouse.click(300, 460);
  await page.waitForTimeout(2500);
  await page.screenshot({ path: `${shots}/04-start-screen.png` });
  const state = await page.evaluate(() => ({ screen: currentScreen.name, state, music: music.currentName }));
  console.log(JSON.stringify(state));
  await page.mouse.click(320, 240); // forward
  await page.waitForTimeout(1500);
  await page.screenshot({ path: `${shots}/05-after-forward.png` });
  console.log(await page.evaluate(() => currentScreen.name));
  await page.mouse.click(320, 20); // menu
  await page.waitForTimeout(2000);
  await page.screenshot({ path: `${shots}/06-menu.png` });
  await page.mouse.click(310, 375); // continue
  await page.waitForTimeout(2000);
  console.log(await page.evaluate(() => [state, currentScreen.name]));
  for (const letter of ['B', 'A', 'P', 'E', 'T']) {
    await page.evaluate((l) => startPuzzle(l), letter);
    await page.waitForTimeout(800);
    await page.screenshot({ path: `${shots}/07-puzzle-${letter}.png` });
    await page.evaluate(() => { activePuzzle.exitRequested = true; return puzzleMouse(0, 0, false); });
    await page.waitForTimeout(300);
  }
  console.log('errors:', JSON.stringify(errors, null, 1));
  await browser.close();
})();
