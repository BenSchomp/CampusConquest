// Solves every puzzle with real mouse clicks and checks the solved result screen gets swapped in.
const { chromium } = require('playwright');
const shots = process.argv[2];
(async () => {
  const browser = await chromium.launch();
  const page = await browser.newPage({ viewport: { width: 640, height: 480 } });
  const errors = [];
  page.on('pageerror', (e) => errors.push(e.message));
  await page.goto('http://localhost:8765/index.html');
  await page.evaluate(() => { settings.SHOW_INTRO = false; });
  await page.mouse.click(320, 240);
  await page.waitForTimeout(800);
  await page.mouse.click(300, 460); // New
  await page.waitForTimeout(2000);
  const click = async (x, y, wait = 120) => { await page.mouse.click(x, y); await page.waitForTimeout(wait); };
  const solved = (letter) => page.evaluate((l) => puzzles[l].solved, letter);
  const report = {};

  // Towers of Hanoi: move 5 disks from peg 1 to peg 3.
  await page.evaluate(() => startPuzzle('T')); await page.waitForTimeout(400);
  const pegX = [185, 285, 385];
  const moves = [];
  const hanoi = (n, a, b, c) => { if (!n) return; hanoi(n - 1, a, c, b); moves.push([a, c]); hanoi(n - 1, b, a, c); };
  hanoi(5, 0, 1, 2);
  for (const [from, to] of moves) { await click(pegX[from], 250, 30); await click(pegX[to], 250, 30); }
  report.towers = { moves: moves.length, solved: await solved('T') };
  await page.screenshot({ path: `${shots}/t-solved.png` });
  await click(320, 400, 600);

  // Presidents: bubble sort by clicking a portrait to swap it with its right neighbour.
  await page.evaluate(() => startPuzzle('P')); await page.waitForTimeout(400);
  for (let pass = 0; pass < 5; pass++) {
    for (let slot = 0; slot < 4; slot++) {
      const order = await page.evaluate(() => puzzles.P.order.slice());
      if (order[slot] > order[slot + 1]) await click(160 + 80 * slot, 250, 60);
    }
  }
  report.presidents = { order: await page.evaluate(() => puzzles.P.order.join('')), solved: await solved('P') };
  await page.screenshot({ path: `${shots}/p-solved.png` });
  await click(320, 400, 600);

  // Eight queens: one known solution (row for each column).
  await page.evaluate(() => startPuzzle('E')); await page.waitForTimeout(400);
  const rows = [0, 4, 7, 5, 2, 6, 1, 3];
  // Include a wrong placement and a removal to exercise both paths.
  await click(131 + 20, 76 + 20); await click(131 + 40 + 20, 76 + 39 + 20); // attacked square -> buzzer
  await click(131 + 20, 76 + 20); // remove the first queen
  for (let column = 0; column < 8; column++) await click(131 + 40 * column + 20, 76 + 39 * rows[column] + 20, 60);
  report.queens = { placed: await page.evaluate(() => puzzles.E.placed), solved: await solved('E') };
  await page.screenshot({ path: `${shots}/e-solved.png` });
  await click(320, 440, 600);

  // Array game: the one winning line is Left, Left, Right, Right, Right.
  await page.evaluate(() => startPuzzle('A')); await page.waitForTimeout(400);
  for (const side of ['L', 'L', 'R', 'R', 'R']) {
    const { low, high } = await page.evaluate(() => ({ low: puzzles.A.low, high: puzzles.A.high }));
    const index = side === 'L' ? low : high;
    await click(75 + 50 * index + 20, 220, 1300);
  }
  await page.waitForTimeout(1500);
  report.array = await page.evaluate(() => ({ player: puzzles.A.playerScore, computer: puzzles.A.computerScore, solved: puzzles.A.solved }));
  await page.screenshot({ path: `${shots}/a-solved.png` });
  await click(320, 440, 600);

  // Box: verify the solved check by setting a one-move-from-solved board, then clicking.
  await page.evaluate(() => startPuzzle('B')); await page.waitForTimeout(400);
  await page.evaluate(() => { puzzles.B.board = [0, 4, 8, 12, 1, 5, 9, 13, 2, 11, 10, 14, 3, 7, 6, -1].map((v, i) => v); });
  // column-major solved layout is board[c*4+r] = r*4+c; build it and move the last tile out.
  await page.evaluate(() => { const b = []; for (let c = 0; c < 4; c++) for (let r = 0; r < 4; r++) b.push(r * 4 + c); b[15] = b[14]; b[14] = -1; b[15] = -1; b[14] = 14; puzzles.B.board = b; puzzles.B.board[3*4+3] = -1; puzzles.B.board[3*4+2] = -1; puzzles.B.board[3*4+3] = 11; });
  await click(214 + 50 * 3 + 25, 111 + 50 * 3 + 25);
  report.box = { solved: await solved('B') };
  await page.screenshot({ path: `${shots}/b-solved.png` });
  await click(436, 382, 600);

  report.results = await page.evaluate(() => ['ArrayGame', 'BoxGame', 'EightQueens', 'PresPuzzle', 'Towers']
    .map((n) => [n, screenNamed(n + '_result').image]));
  report.state = await page.evaluate(() => [state, currentScreen.name]);
  report.errors = errors;
  console.log(JSON.stringify(report, null, 1));
  await browser.close();
})();
