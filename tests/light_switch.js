// The light switch beside the dark doorway: pointer, on/off toggle, redraw, and the room behind it.
const { chromium } = require('playwright');
const shots = process.argv[2];
(async () => {
  const browser = await chromium.launch();
  const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  const errors = []; page.on('pageerror', (e) => errors.push(e.message));
  page.on('console', (m) => { if (m.type() === 'warning') errors.push(m.text()); });
  await page.goto('http://localhost:8765/index.html');
  await page.evaluate(() => { settings.SHOW_INTRO = false; });
  await page.mouse.click(320, 240); await page.waitForTimeout(800);
  await page.mouse.click(300, 460); await page.waitForTimeout(2500);
  const report = {};
  // Hallway: no switch spot any more; the left edge is just a turn.
  await page.evaluate(() => { currentScreen = screenNamed('ranger21-20'); return showCurrentScreen(); });
  await page.mouse.move(70 + 43, 50 + 230); await page.waitForTimeout(200);
  report.hallwayPointer = await page.evaluate(() => canvas.style.cursor.match(/cursor(\d+)/)[1]);
  await page.screenshot({ path: `${shots}/ls-hallway.png` });
  // Turn around (left) to the doorway.
  await page.mouse.click(70 + 20, 50 + 200); await page.waitForTimeout(1200);
  report.doorway = await page.evaluate(() => [currentScreen.name, currentScreen.image]);
  await page.mouse.move(70 + 190, 50 + 120); await page.waitForTimeout(200);
  report.switchPointer = await page.evaluate(() => canvas.style.cursor.match(/cursor(\d+)/)[1]);
  await page.mouse.click(70 + 190, 50 + 120); await page.waitForTimeout(700);
  report.afterOn = await page.evaluate(() => [currentScreen.image, currentPicture.image.src.split('/').pop()]);
  await page.screenshot({ path: `${shots}/ls-on.png` });
  await page.mouse.click(70 + 190, 50 + 120); await page.waitForTimeout(700);
  report.afterOff = await page.evaluate(() => [currentScreen.image, currentPicture.image.src.split('/').pop()]);
  await page.screenshot({ path: `${shots}/ls-off.png` });
  await page.mouse.click(70 + 190, 50 + 120); await page.waitForTimeout(700); // on again
  await page.mouse.click(70 + 270, 50 + 180); await page.waitForTimeout(1200); // walk through the doorway
  report.through = await page.evaluate(() => currentScreen.name);
  // Leave and come back: the lights stay as you left them.
  await page.evaluate(() => { currentScreen = screenNamed('ranger20-10'); return showCurrentScreen(); });
  await page.evaluate(() => clickZone({ action: 'link', data: 'ranger20-21' }));
  report.returned = await page.evaluate(() => currentScreen.image);
  report.errors = errors;
  console.log(JSON.stringify(report, null, 1));
  await browser.close();
})();
