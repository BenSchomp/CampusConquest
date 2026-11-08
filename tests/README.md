Playwright scripts. Serve `web/` on port 8765 (`cd web && python3 -m http.server 8765`), then:

    node tests/smoke.js /tmp/shots     # intro, title, walking, menu, each puzzle's first screen
    node tests/puzzles.js /tmp/shots   # solves all five puzzles with mouse clicks
    node tests/flows.js /tmp/shots     # elevator wait, story trigger, save/load, ending, phone layout
    node tests/menu_music.js           # music resumes after leaving the menu
    node tests/light_switch.js         # light switch toggles the Towers room lights on and off
    node tests/hotzone_wins.js         # click spots beat the turn/forward strips they overlap
    node tests/pointers.js             # every magnifier/hand spot shows its pointer; resized spots still lead where they did
    node tests/intro.js /tmp/shots     # ram logo start screen, then the intro dissolves into the title
    node tests/cursor_flicker.js       # hovering inside a click spot never re-assigns the pointer
