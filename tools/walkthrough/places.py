"""Group screens into walkable places and buildings."""
import collections, re, sys
from mapdata import parse_map

GROUPED_VIEWS = ('clock', 'callbox', 'fuse', 'closet', 'brickclue', 'blisselev', 'vend', 'libbench')   # several close-up views of one spot

def own_place(name):
    head = name.split('-')[0]
    for prefix in GROUPED_VIEWS:
        if head.startswith(prefix): return None
    return head if re.fullmatch(r'[a-z]+\d+[a-z]?', head) else None

def area_of(place):
    for prefixes, area in ((('union', 'mail'), 'Memorial Union'), (('bliss',), 'Bliss Hall'), (('lip',), 'Lippitt Hall'),
                           (('ranger',), 'Ranger Hall'), (('lib',), 'Library'), (('q',), 'Quadrangle')):
        if any(place.startswith(prefix) for prefix in prefixes) and not (prefixes == ('q',) and not re.fullmatch(r'q\d+', place)):
            return area
    return 'Outside'

def build(map_path):
    start, screens = parse_map(map_path)
    undirected = collections.defaultdict(set)
    for name, screen in screens.items():
        for exit in screen['exits']:
            if 'link' in exit:
                target = exit['link'].lower()
                undirected[name].add(target); undirected[target].add(name)
    place_of = {}
    for name in screens:
        if own_place(name): place_of[name] = own_place(name); continue
        seen, queue = {name}, collections.deque([name])
        while queue:
            current = queue.popleft()
            if own_place(current): place_of[name] = own_place(current); break
            for neighbour in sorted(undirected[current]):
                if neighbour not in seen: seen.add(neighbour); queue.append(neighbour)
    edges = collections.Counter()
    for name, screen in screens.items():
        for exit in screen['exits']:
            if 'link' in exit:
                a, b = place_of.get(name), place_of.get(exit['link'].lower())
                if a and b and a != b: edges[tuple(sorted((a, b)))] += 1
    return start, screens, place_of, edges
