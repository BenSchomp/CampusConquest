"""Parse the original mapData.txt the way the 2001 engine does and report broken references."""
import re, sys, pathlib

game_dir = pathlib.Path(sys.argv[1])
text = (game_dir / 'mapData.txt').read_text(encoding='latin-1')
tokens = re.sub(r'#[^\n]*', '', text).split()
images = {p.name.lower() for p in (game_dir / 'images').iterdir()}
sounds = {p.name.lower() for p in (game_dir / 'sounds').iterdir()}

screens, index = {}, 0
while index < len(tokens):
    token = tokens[index]
    if token == 'scrn':
        name = tokens[index + 1]; index += 2
        if tokens[index] != '{':
            print('missing { after scrn', name)
        index += 1
        screen = {'img': None, 'zones': []}
        while tokens[index] != '}':
            token = tokens[index]
            if token == 'img': screen['img'] = tokens[index + 1]; index += 2
            elif token == 'music': screen['music'] = tokens[index + 1]; index += 2
            elif token in ('forward', 'left', 'right', 'down', 'up', 'hotzone'):
                close = tokens.index('>', index)
                screen['zones'].append(tokens[index:close + 1]); index = close + 1
            else:
                print('unknown token', token, 'in', name); index += 1
        screens[name.lower()] = screen
        index += 1
    else:
        index += 1

problems = 0
for name, screen in screens.items():
    if screen['img'] and screen['img'].lower() not in images:
        print('missing image', screen['img'], 'for', name); problems += 1
    if screen.get('music') and screen['music'].lower() not in sounds:
        print('missing music', screen['music'], 'for', name); problems += 1
    for zone in screen['zones']:
        for keyword, value in zip(zone, zone[1:]):
            if keyword == 'link' and value.lower() not in screens:
                print('unknown link', value, 'from', name); problems += 1
            if keyword == 'sound' and value.lower() not in sounds:
                print('missing sound', value, 'from', name); problems += 1
            if keyword == 'set':
                for part in value.split('='):
                    if part.lower() not in screens: print('unknown set target', part, 'from', name); problems += 1
print(len(screens), 'screens,', problems, 'problems')

# Reachability from the start screen, following links and set/puzzle-result rebinds.
start = tokens[tokens.index('start') + 1].lower()
replacements = {}
for name, screen in screens.items():
    for zone in screen['zones']:
        for keyword, value in zip(zone, zone[1:]):
            if keyword == 'set':
                target, source = value.lower().split('=')
                replacements.setdefault(target, set()).add(source)
for puzzle in ('arraygame', 'boxgame', 'eightqueens', 'prespuzzle', 'towers'):
    replacements.setdefault(puzzle + '_result', set()).add(puzzle + '_solved')
replacements.setdefault('unionexitclosed', set()).add('unionexitunlocked')
replacements.setdefault('box', set()).add('boxwithkey')
replacements.setdefault('unionhallclose', set()).add('gotkey')
seen, stack = set(), [start]
while stack:
    name = stack.pop()
    if name in seen or name not in screens: continue
    seen.add(name)
    variants = [name] + sorted(replacements.get(name, ()))
    for variant in variants:
        if variant not in screens: print('missing variant', variant); continue
        seen.add(variant)
        for zone in screens[variant]['zones']:
            for keyword, value in zip(zone, zone[1:]):
                if keyword == 'link': stack.append(value.lower())
print(len(seen), 'reachable')
for name in sorted(seen):
    if screens.get(name, {}).get('img') and screens[name]['img'].lower() not in images:
        print('REACHABLE screen with missing image:', name)
