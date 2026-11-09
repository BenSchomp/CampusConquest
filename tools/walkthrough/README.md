Scripts that draw the walkthrough maps in `docs/walkthrough/`. They need `networkx`, `scipy` and
`matplotlib` (`pip install networkx scipy matplotlib`). Run them from the repository root:

    python3 tools/walkthrough/statesearch.py web/mapData.txt
        # checks every puzzle, story trigger and switch is needed, and prints the shortest full route
    python3 tools/walkthrough/schematic_map.py web/mapData.txt docs/walkthrough/walkthrough-schematic.png
        # places laid out by how the screens connect
    python3 tools/walkthrough/campus_map.py tools/walkthrough/osm-uri-campus.json docs/walkthrough/walkthrough-campus.png
        # the same stops over the real campus

The walkthrough order (and each stop's wording) lives in `route.py`; `campus_map.py` repeats the
wording with each stop's building. `osm-uri-campus.json` is OpenStreetMap's buildings and paths for
the campus core (© OpenStreetMap contributors, ODbL), downloaded with:

    curl -A 'CampusConquestMap/1.0' -H 'Accept: application/json' -o osm-uri-campus.json \
      --data-urlencode 'data=[out:json][timeout:100];(way["building"](41.481,-71.535,41.492,-71.520);way["highway"](41.481,-71.535,41.492,-71.520););out geom;' \
      https://overpass-api.de/api/interpreter
