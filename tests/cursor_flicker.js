// The game's pointer is an <img> that follows the mouse (the canvas hides the system pointer):
// moving inside one click spot never swaps its picture, and its hotspot sits on the mouse.
const { chromium } = require('playwright');
(async () => {
  const browser = await chromium.launch(); const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  await page.goto('http://localhost:8765/index.html');
  await page.evaluate(() => { settings.SHOW_INTRO = false; });
  await page.mouse.click(320, 240); await page.waitForTimeout(800);
  await page.mouse.click(300, 460); await page.waitForTimeout(2500);
  await page.evaluate(() => { currentScreen = screenNamed('callbox'); state = STATE.GAME; return showCurrentScreen(); });
  await page.mouse.move(250, 185); await page.waitForTimeout(300);
  await page.evaluate(() => {
    window.pointerSwaps = [];
    new MutationObserver(() => window.pointerSwaps.push(pointerImage.src)).observe(pointerImage, { attributeFilter: ['src'] });
  });
  for (let i = 0; i < 40; i++) await page.mouse.move(250 + (i % 10), 185 + (i % 7));
  await page.waitForTimeout(300);
  const result = await page.evaluate(() => {
    const box = pointerImage.getBoundingClientRect();
    return { swaps: window.pointerSwaps.length, picture: pointerImage.src.match(/cursor(\w+)\.png/)[1], hidden: pointerImage.hidden,
             hotspotAt: [box.left + shownCursor.hotspotX, box.top + shownCursor.hotspotY], systemCursor: getComputedStyle(canvas).cursor };
  });
  await page.mouse.move(250, 470); await page.mouse.move(-5, -5);
  console.log({ ...result, expectedHotspotAt: [250 + 39 % 10, 185 + 39 % 7] });
  await browser.close();
})();
