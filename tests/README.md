Playwright scripts. Serve `web/` on port 8765 (`cd web && python3 -m http.server 8765`), then:

    node tests/smoke.js /tmp/shots     # intro, title, walking, menu, each puzzle's first screen
    node tests/puzzles.js /tmp/shots   # solves all five puzzles with mouse clicks
    node tests/flows.js /tmp/shots     # elevator wait, story trigger, save/load, ending, phone layout
