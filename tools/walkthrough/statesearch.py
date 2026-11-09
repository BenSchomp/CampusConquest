"""Position-aware search: can the ending be reached without a given event? What is the shortest full route?"""
import collections, copy, sys
import world as base

EVENTS = [('trigger', 'letter'), ('trigger', 'ru7-ru6'), ('trigger', 'boxwithoutkey'),
          ('set', 'libDoorsClosed=libDoorsUnlocked'), ('set', 'blissElevClosed=blissElevClosed2'),
          ('set', 'ranger20-21=ranger20-21_light'),
          ('puzzle', 'P'), ('puzzle', 'A'), ('puzzle', 'T'), ('puzzle', 'B'), ('puzzle', 'E')]

def world(done):
    screens = copy.deepcopy(base.original)
    for index, (kind, what) in enumerate(EVENTS):
        if not done >> index & 1: continue
        if kind == 'trigger': base.apply_set(screens, *base.TRIGGERS[what])
        elif kind == 'puzzle': result = base.PUZZLE_RESULT[what]; base.apply_set(screens, f'{result}_result', f'{result}_solved')
        else: base.apply_set(screens, *what.split('=', 1))
    return screens

worlds = {}
def screens_for(done):
    if done not in worlds: worlds[done] = world(done)
    return worlds[done]

def search(forbidden=None):
    start = (base.start, 0)
    parent = {start: None}
    queue = collections.deque([start])
    while queue:
        name, done = queue.popleft()
        if name == 'winner': 
            route = []; state = (name, done)
            while state: route.append(state); state = parent[state]
            return route[::-1]
        screens = screens_for(done)
        steps = []
        for exit in screens[name]['exits']:
            if 'link' in exit: steps.append((exit['link'].lower(), done))
            for index, (kind, what) in enumerate(EVENTS):
                if index == forbidden or done >> index & 1: continue
                if kind == 'puzzle' and exit.get('puzzle', '')[:1] == what: steps.append((name, done | 1 << index))
                if kind == 'set' and exit.get('set') == what: steps.append((name, done | 1 << index))
        if name in base.TRIGGERS:
            index = EVENTS.index(('trigger', name))
            if index != forbidden and not done >> index & 1: steps.insert(0, (name, done | 1 << index))
        for state in steps:
            # triggers fire on arrival, so arriving at a trigger screen always applies it
            if state[0] in base.TRIGGERS and state[0] != name:
                index = EVENTS.index(('trigger', state[0]))
                if index != forbidden: state = (state[0], state[1] | 1 << index)
            if state not in parent: parent[state] = (name, done); queue.append(state)
    return None

if __name__ == '__main__':
    for index, event in enumerate(EVENTS):
        print(event, 'NEEDED' if search(index) is None else 'optional')
    route = search()
    previous = 0
    for name, done in route:
        if done != previous:
            new = [EVENTS[i] for i in range(len(EVENTS)) if (done ^ previous) >> i & 1]
            print('  ->', new, 'at', name)
            previous = done
    print('route length', len(route))
