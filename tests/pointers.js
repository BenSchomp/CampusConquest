// Every magnifier/hand hotspot shows its pointer on hover, the pointer images load, and the
// resized spots on backstone and boxWithKey still lead where they did.
const { chromium } = require('playwright');
(async () => {
  const browser = await chromium.launch(); const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  const missing = [];
  page.on('response', (r) => { if (r.status() >= 400) missing.push(r.url()); });
  await page.goto('http://localhost:8765/index.html');
  await page.evaluate(() => { settings.SHOW_INTRO = false; });
  await page.mouse.click(320, 240); await page.waitForTimeout(800);
  await page.mouse.click(300, 460); await page.waitForTimeout(2500);
  const spots = await page.evaluate(() => {
    const list = [];
    for (const s of world.screens.values()) for (const z of s.zones) {
      if (z.cursor < 4) continue;
      const [l, t, r, b] = z.rect;
      // a point inside this zone where it is the zone that wins
      for (const [x, y] of [[(l + r) >> 1, (t + b) >> 1], [l + 1, t + 1], [r - 1, b - 1]]) {
        if (zoneAt(s, x, y) === z) { list.push({ screen: s.name, x, y, expected: z.cursor === 4 ? 'magnifier' : 'hand' }); break; }
      }
    }
    return list;
  });
  const wrong = [];
  for (const spot of spots) {
    await page.evaluate((name) => { currentScreen = screenNamed(name); state = STATE.GAME; }, spot.screen);
    await page.mouse.move(0, 0); await page.mouse.move(spot.x, spot.y);
    const shown = await page.evaluate(() => (pointerImage.src.match(/cursor(\w+)\.png/) || [])[1]);
    if (shown !== spot.expected) wrong.push({ ...spot, shown });
  }
  const clicks = {};
  for (const [screen, x, y] of [['backstone', 545, 200], ['backstone', 450, 200], ['backstone', 120, 200], ['backstone', 310, 278], ['boxWithKey', 370, 290]]) {
    await page.evaluate((name) => { currentScreen = screenNamed(name); state = STATE.GAME; return showCurrentScreen(); }, screen);
    await page.mouse.click(x, y); await page.waitForTimeout(900);
    clicks[`${screen} @${x},${y}`] = await page.evaluate(() => currentScreen.name);
  }
  console.log(JSON.stringify({ checked: spots.length, wrong, clicks, missing }, null, 1));
  await browser.close();
})();
