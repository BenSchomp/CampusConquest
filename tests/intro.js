// Start screen shows the ram logo with "Click to start"; the click plays the intro into the title.
const { chromium } = require('playwright');
const outDir = process.argv[2] || '/tmp';
(async () => {
  const browser = await chromium.launch(); const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  const errors = []; page.on('pageerror', (e) => errors.push(String(e)));
  await page.goto('http://localhost:8765/index.html'); await page.waitForTimeout(1500);
  await page.screenshot({ path: `${outDir}/intro-0-start.png` });
  const startedAt = Date.now();
  await page.mouse.click(320, 240);
  const states = [];
  for (const [at, name] of [[2000, '1-ram'], [4300, '2-dissolve'], [7000, '3-white'], [10600, '4-to-title'], [12500, '5-title']]) {
    await page.waitForTimeout(Math.max(0, at - (Date.now() - startedAt)));
    await page.screenshot({ path: `${outDir}/intro-${name}.png` });
    states.push([name, await page.evaluate(() => [state, (currentPicture.image.src.match(/images\/(\w+)/) || [])[1]])]);
  }
  console.log(JSON.stringify({ states, errors }));
  await browser.close();
})();
