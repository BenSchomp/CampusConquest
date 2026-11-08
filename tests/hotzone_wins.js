const { chromium } = require('playwright');
(async () => {
  const browser = await chromium.launch(); const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  await page.goto('http://localhost:8765/index.html');
  await page.evaluate(() => { settings.SHOW_INTRO = false; });
  await page.mouse.click(320, 240); await page.waitForTimeout(800);
  await page.mouse.click(300, 460); await page.waitForTimeout(2500);
  // Every hotzone pixel inside a strip must resolve to the hotzone, on every screen.
  const failures = await page.evaluate(() => {
    const bad = [];
    for (const s of world.screens.values()) for (const z of s.zones) {
      if (!z.rect || z.isNavigationStrip) continue;
      const [l, t, r, b] = z.rect;
      for (const [x, y] of [[l, t], [r, b], [(l + r) >> 1, (t + b) >> 1]]) {
        const hit = zoneAt(s, x, y);
        if (hit && hit.isNavigationStrip) bad.push(s.name);
      }
    }
    return bad;
  });
  await page.evaluate(() => { currentScreen = screenNamed('lip16-doors'); return showCurrentScreen(); });
  const zone = await page.evaluate(() => currentScreen.zones.find((z) => z.data === 'lip16-doorsopen').rect);
  const [x, y] = [zone[0] + 2, (zone[1] + zone[3]) >> 1];
  await page.mouse.move(x, y); await page.waitForTimeout(200);
  const pointer = await page.evaluate(() => canvas.style.cursor.match(/cursor(\w+)\.png/)[1]);
  await page.mouse.click(x, y); await page.waitForTimeout(1200);
  console.log({ failures, pointer, after: await page.evaluate(() => currentScreen.name) });
  await browser.close();
})();
