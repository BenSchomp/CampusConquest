"""The game world as a graph: story triggers, puzzle results, and walking between screens."""
import collections, copy, sys
from mapdata import parse_map

PUZZLE_RESULT = {'P': 'PresPuzzle', 'B': 'BoxGame', 'T': 'Towers', 'A': 'ArrayGame', 'E': 'EightQueens'}
TRIGGERS = {'letter': ('unionExitClosed', 'unionExitUnlocked'), 'ru7-ru6': ('box', 'boxWithKey'),
            'boxwithoutkey': ('unionHallClose', 'gotKey')}

start, original = parse_map(sys.argv[1])

def apply_set(screens, target, source):
    screens[target.lower()] = {**copy.deepcopy(original[source.lower()]), 'name': target}

def neighbours(screens, name):
    for exit in screens[name]['exits']:
        if 'link' in exit: yield exit['link'].lower(), exit
        elif 'set' in exit and '=' in exit['set']: yield None, exit

def bfs(screens, origin):
    parent = {origin: None}
    queue = collections.deque([origin])
    while queue:
        name = queue.popleft()
        for target, exit in neighbours(screens, name):
            if target and target not in parent:
                parent[target] = name; queue.append(target)
    return parent

def path_to(parent, name):
    path = []
    while name: path.append(name); name = parent[name]
    return path[::-1]
