// Chrome on macOS: the start click takes pointer lock on the canvas, clicks land where the game's
// own pointer is (the real one is frozen), and releasing the lock (Esc) brings the normal tracking
// back. Other browsers never lock. Headless Chrome fakes the movement under lock, so the movement
// itself is only checked by hand on a Mac.
const { chromium } = require('playwright');
const MAC_CHROME = 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/157.0.0.0 Safari/537.36';
(async () => {
  const browser = await chromium.launch();
  const page = await browser.newPage({ viewport: { width: 640, height: 480 }, userAgent: MAC_CHROME });
  await page.goto('http://localhost:8765/index.html');
  await page.evaluate(() => { settings.SHOW_INTRO = false; });
  await page.mouse.click(320, 240); await page.waitForTimeout(800);
  const lockedAfterStart = await page.evaluate(() => document.pointerLockElement === canvas);
  const clickUsesGamePointer = await page.evaluate(() => {
    mouseClientX = 100; mouseClientY = 50;
    const point = toScreenPoint({ clientX: 600, clientY: 400 });
    return point.x === 100 && point.y === 50;
  });
  await page.evaluate(() => document.exitPointerLock()); await page.waitForTimeout(200);
  await page.mouse.move(200, 150);
  const afterRelease = await page.evaluate(() => ({ locked: document.pointerLockElement !== null, pointerAt: [mouseClientX, mouseClientY] }));
  const other = await browser.newPage({ viewport: { width: 640, height: 480 } });
  await other.goto('http://localhost:8765/index.html');
  await other.mouse.click(320, 240); await other.waitForTimeout(500);
  const otherBrowserLocked = await other.evaluate(() => document.pointerLockElement !== null);
  const passed = lockedAfterStart && clickUsesGamePointer && !afterRelease.locked
    && afterRelease.pointerAt[0] === 200 && afterRelease.pointerAt[1] === 150 && !otherBrowserLocked;
  console.log({ lockedAfterStart, clickUsesGamePointer, afterRelease, otherBrowserLocked, passed });
  await browser.close();
})();
