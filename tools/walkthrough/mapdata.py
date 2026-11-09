"""Parse Campus Conquest mapData.txt into screens with their exits."""
import re


def parse_action(text):
    tokens = text.split()
    action = {}
    index = 0
    while index < len(tokens):
        token = tokens[index].lower()
        if token in ('link', 'puzzle', 'set', 'sound', 'cursor') and index + 1 < len(tokens):
            action[token] = tokens[index + 1]; index += 2
        elif token == 'exit':
            action['exit'] = True; index += 1
        else:
            index += 1
    return action

def parse_map(path):
    text = open(path, encoding='latin-1').read()
    screens = {}
    start = re.search(r'^\s*start\s+(\S+)', text, re.M).group(1)
    for match in re.finditer(r'scrn\s+(\S+)\s*\{(.*?)\}', text, re.S):
        name, body = match.group(1), match.group(2)
        screen = {'name': name, 'image': None, 'exits': []}
        body = '\n'.join(line.split('#', 1)[0] for line in body.splitlines())  # hotzones can span lines
        image = re.search(r'\bimg\s+(\S+)', body)
        if image: screen['image'] = image.group(1)
        for item in re.finditer(r'\b(forward|left|right|down|up)\s*<([^>]*)>|\bhotzone\s*<\s*rect\s+(\d+)\s+(\d+)\s+(\d+)\s+(\d+)([^>]*)>', body, re.I):
            if item.group(1):
                screen['exits'].append({'kind': item.group(1).lower(), **parse_action(item.group(2))})
            else:
                screen['exits'].append({'kind': 'hotzone', 'rect': tuple(int(item.group(i)) for i in range(3, 7)), **parse_action(item.group(7))})
        screens[name.lower()] = screen
    return start.lower(), screens
