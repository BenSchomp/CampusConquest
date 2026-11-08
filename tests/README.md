Playwright scripts. Serve `web/` on port 8765 (`cd web && python3 -m http.server 8765`), then:

    node tests/smoke.js /tmp/shots     # intro, title, walking, menu, each puzzle's first screen
    node tests/puzzles.js /tmp/shots   # solves all five puzzles with mouse clicks
    node tests/flows.js /tmp/shots     # elevator wait, story trigger, save/load, ending, phone layout
    node tests/menu_music.js           # music resumes after leaving the menu
    node tests/light_switch.js         # light switch toggles the Towers room lights on and off
    node tests/hotzone_wins.js         # click spots beat the turn/forward strips they overlap
    node tests/pointers.js             # every magnifier/hand spot shows its pointer; resized spots still lead where they did
    node tests/intro.js /tmp/shots     # start screen words fade in; a click fades them out, then dissolves to the white ram and the title
    node tests/cursor_flicker.js       # hovering inside a click spot never re-assigns the pointer
    node tests/pointer_lock.js         # Chrome on macOS takes pointer lock on the start click; other browsers do not
