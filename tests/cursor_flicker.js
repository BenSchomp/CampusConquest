// Moving the mouse inside one click spot must not change the pointer at all.
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
    window.cursorWrites = [];
    const original = Object.getOwnPropertyDescriptor(CSSStyleDeclaration.prototype, 'cursor');
    Object.defineProperty(canvas.style, 'cursor', { configurable: true, get() { return original.get.call(this); },
      set(value) { window.cursorWrites.push(value.match(/cursor(\w+)\.png/)?.[1] || value); original.set.call(this, value); } });
  });
  for (let i = 0; i < 40; i++) await page.mouse.move(250 + (i % 10), 185 + (i % 7));
  await page.waitForTimeout(300);
  const writes = await page.evaluate(() => window.cursorWrites);
  console.log({ writes: writes.length, distinct: [...new Set(writes)] });
  await browser.close();
})();
