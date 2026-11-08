// Elevator wait-for-sound, save/load, story triggers, the ending, and a phone-sized layout.
const { chromium, devices } = require('playwright');
const shots = process.argv[2];
(async () => {
  const browser = await chromium.launch();
  const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  const errors = [];
  page.on('pageerror', (e) => errors.push(e.message));
  page.on('console', (m) => { if (m.type() === 'warning' || m.type() === 'error') errors.push(m.text()); });
  await page.goto('http://localhost:8765/index.html');
  await page.evaluate(() => { settings.SHOW_INTRO = false; });
  await page.mouse.click(320, 240); await page.waitForTimeout(800);
  await page.mouse.click(300, 460); await page.waitForTimeout(2000);
  const report = {};
  const go = (name) => page.evaluate((n) => { currentScreen = screenNamed(n); return showCurrentScreen(); }, name);

  // Elevator: pressing the call button plays elevatorRun2.wav and blocks input until it ends.
  await go('blissElevClosed');
  await page.mouse.click(70 + 100, 50 + 185); await page.waitForTimeout(100);
  report.elevatorStateDuringSound = await page.evaluate(() => state);
  report.elevatorRebound = await page.evaluate(() => screenNamed('blissElevClosed').zones.some((z) => z.data === 'blissElevOpen'));
  await page.waitForTimeout(9800);
  report.elevatorStateAfter = await page.evaluate(() => state);

  // Story trigger: arriving at "letter" unlocks the union exit.
  await page.evaluate(() => clickZone({ action: 'link', data: 'letter' }));
  report.unionExitUnlocked = await page.evaluate(() => screenNamed('unionExitClosed').image);

  // Save, start a new game, load.
  await go('lib1-doors');
  await page.mouse.click(320, 20); await page.waitForTimeout(1500);
  await page.mouse.click(310, 188); await page.waitForTimeout(200);  // Save
  await page.mouse.click(310, 240); await page.waitForTimeout(2000); // New
  report.afterNew = await page.evaluate(() => [currentScreen.name, screenNamed('unionExitClosed').image]);
  await page.mouse.click(320, 20); await page.waitForTimeout(1500);
  await page.mouse.click(310, 214); await page.waitForTimeout(2000); // Load
  report.afterLoad = await page.evaluate(() => [currentScreen.name, screenNamed('unionExitClosed').image]);

  // Ending: the trophy leads to the credits screen; clicking it returns to the title.
  await page.evaluate(() => { applySet('EightQueens_result', 'EightQueens_solved'); currentScreen = screenNamed('EightQueens_result'); return showCurrentScreen(); });
  await page.waitForTimeout(300);
  await page.mouse.click(70 + 260, 50 + 250); await page.waitForTimeout(2500);
  report.endingState = await page.evaluate(() => [state, currentScreen.name]);
  await page.screenshot({ path: `${shots}/ending.png` });
  await page.mouse.click(320, 300); await page.waitForTimeout(3000);
  report.afterEnding = await page.evaluate(() => state);
  report.errors = errors;
  console.log(JSON.stringify(report, null, 1));

  // Phone layout (landscape and portrait).
  for (const [label, device] of [['phone-landscape', devices['iPhone 13 landscape']], ['phone-portrait', devices['iPhone 13']]]) {
    const context = await browser.newContext({ ...device });
    const phone = await context.newPage();
    await phone.goto('http://localhost:8765/index.html');
    await phone.screenshot({ path: `${shots}/${label}-start.png` });
    await phone.evaluate(() => { settings.SHOW_INTRO = false; });
    const box = await phone.locator('#start').boundingBox();
    await phone.touchscreen.tap(box.width / 2, box.height / 2); await phone.waitForTimeout(1000);
    const canvasBox = await phone.locator('#screen').boundingBox();
    const tapGame = (x, y) => phone.touchscreen.tap(canvasBox.x + (x / 640) * canvasBox.width, canvasBox.y + (y / 480) * canvasBox.height);
    await tapGame(300, 460); await phone.waitForTimeout(2000);
    await tapGame(320, 240); await phone.waitForTimeout(1500);
    console.log(label, await phone.evaluate(() => currentScreen.name));
    await phone.screenshot({ path: `${shots}/${label}-game.png` });
    await context.close();
  }
  await browser.close();
})();
