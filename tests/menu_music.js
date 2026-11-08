const { chromium } = require('playwright');
(async () => {
  const browser = await chromium.launch();
  const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  await page.goto('http://localhost:8765/index.html');
  await page.evaluate(() => { settings.SHOW_INTRO = false; });
  await page.mouse.click(320, 240); await page.waitForTimeout(800);
  await page.mouse.click(300, 460); await page.waitForTimeout(2500);
  await page.mouse.click(320, 240); await page.waitForTimeout(1500); // walk to a screen with no music line
  const before = await page.evaluate(() => [currentScreen.name, currentScreen.music, music.currentName, !!music.source]);
  await page.mouse.click(320, 20); await page.waitForTimeout(1500);
  const inMenu = await page.evaluate(() => !!music.source);
  await page.mouse.click(310, 375); await page.waitForTimeout(2500); // CONTINUE
  const after = await page.evaluate(() => [currentScreen.name, music.currentName, !!music.source]);
  console.log({ before, inMenu, after });
  await browser.close();
})();
