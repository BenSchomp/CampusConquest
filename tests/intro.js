// Start screen: the ram logo, then "Campus Conquest" and "Click to start ..." fade in. A click at any
// moment (here before the words have finished fading in) fades the words out to black, then the ram
// dissolves to the white one and the intro carries on to the title.
const { chromium } = require('playwright');
const outDir = process.argv[2] || '/tmp';
(async () => {
  const browser = await chromium.launch(); const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  const errors = []; page.on('pageerror', (e) => errors.push(String(e)));
  await page.goto('http://localhost:8765/index.html');
  await page.waitForFunction(() => currentPicture !== null);
  await page.waitForTimeout(2200);   // title fully in, prompt part-way
  await page.screenshot({ path: `${outDir}/intro-0-start.png` });
  const atClick = await page.evaluate(() => ({ ...startScreenText }));
  const startedAt = Date.now();
  await page.mouse.click(320, 240);
  const states = [];
  for (const [at, name] of [[300, '1-words-out'], [1300, '2-dissolve'], [3600, '3-white'], [7500, '4-to-title'], [9200, '5-title']]) {
    await page.waitForTimeout(Math.max(0, at - (Date.now() - startedAt)));
    await page.screenshot({ path: `${outDir}/intro-${name}.png` });
    states.push([name, await page.evaluate(() => [state, (currentPicture.image.src.match(/images\/(\w+)/) || [])[1],
      incomingPicture ? Math.round(incomingPicture.alpha * 100) : null, startScreenText && { ...startScreenText }])]);
  }
  console.log(JSON.stringify({ atClick, states, errors }));
  await browser.close();
})();
