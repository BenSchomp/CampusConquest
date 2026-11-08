"""Convert the original Campus Conquest assets into web-friendly files.

Usage: python3 build_assets.py <original Campus_Conquest dir> <web output dir>

- images/*.dib      -> assets/images/<lowercase name>.png (lossless)
- puzzle sprites    -> assets/sprites/*.png, cut from the *Template.dib sheets exactly where the
                       2001 engine cut them, coloured with the background's palette (the game ran
                       in 256-colour mode, so sprites always used the background's palette) and
                       with palette index 0 transparent (the DirectDraw colour key)
- sounds/*.wav      -> assets/sounds/<lowercase name>.wav (copied as-is)
- sounds/*.mid      -> assets/music/<lowercase name>.mp3 (rendered with FluidSynth, General MIDI)
- mapData.txt       -> copied with MAP_DATA_FIXES, HOTZONE_RECT_CHANGES and HOTZONE_POINTERS applied
"""
import pathlib, re, shutil, subprocess, sys
from PIL import Image, ImageDraw, ImageFilter

source_dir, output_dir = pathlib.Path(sys.argv[1]), pathlib.Path(sys.argv[2])
assets = output_dir / 'assets'
for sub in ('images', 'sprites', 'sounds', 'music'):
    (assets / sub).mkdir(parents=True, exist_ok=True)

for dib in sorted((source_dir / 'images').glob('*.dib')):
    target = assets / 'images' / (dib.stem.lower() + '.png')
    if not target.exists():
        Image.open(dib).save(target, optimize=True)

def edit_light_switch_pictures():
    """Move the light switch from the hallway (ranger21-20) to the wall left of the dark doorway.

    Always regenerated from the original .dib files, so rebuilding gives the same result."""
    images = source_dir / 'images'
    hallway = Image.open(images / 'ranger21-20.dib').convert('RGB')
    switch_plate = hallway.crop((31, 208, 56, 256))
    hallway.paste(hallway.crop((26, 148, 62, 204)), (26, 204))  # clone the clean wall above over the switch
    hallway.save(assets / 'images' / 'ranger21-20.png', optimize=True)
    width, height, center_x, center_y = 15, 29, 190, 120         # sized to the doorway photo's perspective
    left, top = center_x - width // 2, center_y - height // 2
    shadow = Image.new('L', (width + 6, height + 6), 0)
    ImageDraw.Draw(shadow).rectangle((3, 3, width + 2, height + 2), fill=110)
    shadow = shadow.filter(ImageFilter.GaussianBlur(1.5))
    for name in ('ranger20-21_dark', 'ranger20-21'):             # lights off and lights on
        room = Image.open(images / f'{name}.dib').convert('RGB')
        room.paste(Image.new('RGB', shadow.size, (70, 70, 60)), (left - 2, top - 2), shadow)
        room.paste(switch_plate.resize((width, height), Image.LANCZOS), (left, top))
        room.save(assets / 'images' / f'{name}.png', optimize=True)

edit_light_switch_pictures()

def cut_sprite(template_name, background_name, left, top, width, height, sprite_name):
    template = Image.open(source_dir / 'images' / template_name)
    background_palette = Image.open(source_dir / 'images' / background_name).getpalette()
    crop = template.crop((left, top, left + width, top + height))
    crop.putpalette(background_palette)
    rgba = crop.convert('RGBA')
    alpha = [0 if index == 0 else 255 for index in crop.tobytes()]
    rgba.putalpha(Image.frombytes('L', crop.size, bytes(alpha)))
    rgba.save(assets / 'sprites' / f'{sprite_name}.png', optimize=True)

# Title-screen highlight buttons (New / Load / Exit), 80x20 at (10, 10 + 30*i).
for index, label in enumerate(('new', 'load', 'exit')):
    cut_sprite('imageTemplates.dib', 'titleScreen.dib', 10, 10 + 30 * index, 80, 20, f'title-{label}')
# Box puzzle: 15 tiles, 50x50, tile v at ((v % 4) * 50, (v // 4) * 50).
for value in range(15):
    cut_sprite('boxTemplate.dib', 'boxBkgd.dib', (value % 4) * 50, (value // 4) * 50, 50, 50, f'box-{value}')
# Array game: cards worth v at (v * 50, 105), digits d at (d * 50, 5); both 40x40.
for value in range(10):
    cut_sprite('arrayTemplate.dib', 'arrayBkgd.dib', value * 50, 105, 40, 40, f'array-card-{value}')
    cut_sprite('arrayTemplate.dib', 'arrayBkgd.dib', value * 50, 5, 40, 40, f'array-digit-{value}')
# Presidents: portrait k is 75x100 at (10 + 100k, 10).
for index in range(5):
    cut_sprite('presTemplate.dib', 'presPuzzleBkgd.dib', 10 + 100 * index, 10, 75, 100, f'pres-{index}')
# Eight queens: one 40x70 queen at (10, 10).
cut_sprite('queensTemplate.dib', 'queensBkgd.dib', 10, 10, 40, 70, 'queen')
# Towers: disk v (1 = smallest) is 100x10 at (10, 70 + 20(v-1)); the peg marker is 10x10 at (10, 10).
for disk in range(1, 6):
    cut_sprite('towersTemplate.dib', 'towersBkgd.dib', 10, 70 + 20 * (disk - 1), 100, 10, f'disk-{disk}')
cut_sprite('towersTemplate.dib', 'towersBkgd.dib', 10, 10, 10, 10, 'disk-marker')

for wav in sorted((source_dir / 'sounds').glob('*.[wW][aA][vV]')):
    shutil.copyfile(wav, assets / 'sounds' / wav.name.lower())

soundfont = '/usr/share/sounds/sf2/FluidR3_GM.sf2'
for midi in sorted((source_dir / 'sounds').glob('*.mid')):
    target = assets / 'music' / (midi.stem.lower() + '.mp3')
    if target.exists():
        continue
    rendered_wav = target.with_suffix('.render.wav')
    subprocess.run(['fluidsynth', '-ni', '-g', '0.6', '-r', '44100', '-F', str(rendered_wav), soundfont, str(midi)],
                   check=True, capture_output=True)
    subprocess.run(['ffmpeg', '-v', 'error', '-y', '-i', str(rendered_wav), '-af', 'silenceremove=stop_periods=-1:stop_duration=1.5:stop_threshold=-70dB',
                    '-b:a', '96k', str(target)], check=True)
    rendered_wav.unlink()

# Fixes to the 2001 map data, applied to the web copy only (Campus_Conquest/ stays as shipped).
MAP_DATA_FIXES = [
    # scrn bl3-q5 pointed at a picture that never existed; its own picture, bl3-q5.dib, was there all along.
    ('scrn bl3-q5\r\n{\r\n     img bl3-q4.dib', 'scrn bl3-q5\r\n{\r\n     img bl3-q5.dib'),
    # The sign above the library foyer doors linked to lib1-letters, whose picture was never made
    # (a black screen), so that click spot is removed.
    ('     hotzone < rect 82 20 416 62 \r\n\t\t   link lib1-letters >        \r\n', ''),
    # The light switch for the Towers of Hanoi room moves from the hallway (ranger21-20), where it
    # overlapped the turn-left strip, to the wall beside the dark doorway (ranger20-21); see
    # edit_light_switch_pictures below. It now toggles: ranger20-21_dark is a pristine copy of the
    # lights-off screen so the lights can be switched back off.
    ('\thotzone < rect 31 208 55 255 sound lightSwitch.wav set ranger20-21=ranger20-21_light >\r\n', ''),
    ('scrn ranger20-21\r\n{\r\n\timg ranger20-21_dark.dib\r\n\tdown < link ranger20-10 >\r\n\tleft < link ranger21-20 >\r\n'
     '\tright < link ranger21-20 >\r\n\thotzone < rect 227 60 326 299 link ranger22-23_dark >\r\n',
     ''.join(
        f'scrn {name}\r\n{{\r\n\timg ranger20-21_dark.dib\r\n\tdown < link ranger20-10 >\r\n\tleft < link ranger21-20 >\r\n'
        f'\tright < link ranger21-20 >\r\n\thotzone < rect 227 60 326 299 link ranger22-23_dark >\r\n'
        f'\thotzone < rect 179 102 201 138 sound lightSwitch.wav set ranger20-21=ranger20-21_light >\r\n'
        + ('\t\r\n}\r\n\r\n' if name == 'ranger20-21_dark' else '')
        for name in ('ranger20-21_dark', 'ranger20-21'))),
    ('\thotzone < rect 227 60 326 299 link ranger22-23 >\r\n',
     '\thotzone < rect 227 60 326 299 link ranger22-23 >\r\n'
     '\thotzone < rect 179 102 201 138 sound lightSwitch.wav set ranger20-21=ranger20-21_dark >\r\n'),
    # backstone had no turn-right strip; turning right faces the lookout, like turning left.
    ('\tleft < link libstone-lookout >\r\n\t\r\n\thotzone < rect 93 1 108 374',
     '\tleft < link libstone-lookout >\r\n\tright < link libstone-lookout >\r\n\thotzone < rect 93 1 108 374'),
]

# Click spots resized so they cover what they show (image coordinates). None removes a spot.
HOTZONE_RECT_CHANGES = {
    'q3-q4': {(105, 295, 424, 374): (105, 241, 424, 374)},     # brick clue reaches up to the walk spot
    'q4-q3': {(105, 295, 424, 374): (105, 241, 424, 374)},
    'ul3-ul2': {(114, 175, 138, 275): (80, 125, 172, 275)},     # statue and its base
    'lib1-doors': {(374, 238, 401, 290): (362, 238, 414, 290)},  # call box: square
    'lib2-libstone': {(89, 202, 189, 268): (89, 90, 189, 370),   # walk past the monument: its full height
                      (302, 202, 387, 268): (302, 90, 387, 370),
                      (200, 175, 293, 206): (200, 144, 293, 237)},  # inscription: square
    'backstone': {(93, 1, 108, 374): (50, 0, 135, 375),         # walk spots fill the gaps between the
                  (375, 1, 430, 374): (365, 0, 450, 375),       # turn strips and the stone
                  (197, 215, 284, 242): (197, 185, 284, 272)},
    'libcom2': {(70, 156, 336, 202): (55, 46, 321, 312)},
    'libmon-a': {(356, 324, 377, 340): (335, 308, 398, 356)},   # power button: 3x
    'union9-box': {(224, 141, 303, 197): (185, 113, 342, 225)},  # box: 2x
    'boxWithKey': {(176, 193, 206, 233): (176, 168, 311, 241),   # one spot for the whole key
                   (205, 194, 275, 208): None, (273, 176, 311, 226): None},
}

# Pointers for click spots that are not walking: 4 = magnifier (look closer), 5 = hand (press / use).
# A screen maps to one pointer for all its spots, or to {spot rect: pointer}. Walking spots keep
# the forward arrow.
MAGNIFIER, HAND = 4, 5
HOTZONE_POINTERS = {
    'puzzleTest': HAND,
    'lip13-12': MAGNIFIER,
    'liproom1-2': MAGNIFIER,
    'clock1': HAND,
    'clock2': HAND,
    'clock3': HAND,
    'clock4': HAND,
    'clock5': HAND,
    'clock6': HAND,
    'clock7': HAND,
    'clock8': HAND,
    'clock9': HAND,
    'blissDoor': {(75, 61, 118, 118): MAGNIFIER},
    'fire': HAND,
    'fire1': HAND,
    'bliss6-7': {(32, 237, 185, 338): MAGNIFIER},
    'blissBath1': MAGNIFIER,
    'blissBathStall': HAND,
    'blissSinkOff': HAND,
    'blissSinkOn': HAND,
    'blissElevClosed': HAND,
    'blissElevClosed2': HAND,
    'blissElevInside': MAGNIFIER,
    'blissElevInside2ndFloor': MAGNIFIER,
    'blissElevButton': HAND,
    'blissElevButton2nd': HAND,
    'elev2ndFloor': HAND,
    'elevBaseFloor': HAND,
    'bliss2ndElevClosed': HAND,
    'q3-q4': {(105, 295, 424, 374): MAGNIFIER},
    'q4-q3': {(105, 295, 424, 374): MAGNIFIER},
    'ul3-ul2': {(114, 175, 138, 275): MAGNIFIER},
    'lib1-doors': {(374, 238, 401, 290): MAGNIFIER},
    'callbox': HAND,
    'callbox2': HAND,
    'callbox3': HAND,
    'callbox4': HAND,
    'lib2-libstone': {(200, 175, 293, 206): MAGNIFIER},
    'backstone': {(197, 215, 284, 242): MAGNIFIER},
    'libcom2': {(392, 204, 488, 286): MAGNIFIER},
    'libcom-a': MAGNIFIER,
    'libcom-b': MAGNIFIER,
    'libcom-c': MAGNIFIER,
    'libmon-a': HAND,
    'unionHallDoorOpen': HAND,
    'EightQueens_solved': HAND,
    'union9-box': MAGNIFIER,
    'boxWithKey': HAND,
    'mail1-mail2': MAGNIFIER,
    'mailbox': HAND,
    'mailbox-open': {(218, 175, 249, 226): MAGNIFIER, (200, 138, 259, 237): HAND},
    'ranger10-11': {(35, 68, 69, 241): MAGNIFIER},
    'fuse2': MAGNIFIER,
    'fuse4': MAGNIFIER,
    'fuse3': MAGNIFIER,
    'ranger12-13': {(358, 235, 409, 243): MAGNIFIER},
    'closet2': MAGNIFIER,
    'ranger20-21_dark': {(179, 102, 201, 138): HAND},
    'ranger20-21': {(179, 102, 201, 138): HAND},
    'ranger20-21_light': {(179, 102, 201, 138): HAND},
}

map_data = (source_dir / 'mapData.txt').read_bytes().decode('latin-1')
for broken, fixed in MAP_DATA_FIXES:
    if map_data.count(broken) != 1:
        raise SystemExit(f'mapData.txt fix no longer applies: {broken!r}')
    map_data = map_data.replace(broken, fixed)

HOTZONE_PATTERN = re.compile(r'hotzone\s*<\s*rect\s+(\d+)\s+(\d+)\s+(\d+)\s+(\d+)([^>]*)>')

def edit_hotzones(map_data, screen_name, edit_hotzone):
    """Call edit_hotzone(rect, rest_of_hotzone) for each rect hotzone of one scrn block; it returns
    the replacement text. Comment-only lines are left alone, as the engine ignores them."""
    blocks = list(re.finditer(r'scrn\s+' + re.escape(screen_name) + r'\s*\{[^}]*\}', map_data))
    if len(blocks) != 1:
        raise SystemExit(f'mapData.txt: expected one scrn {screen_name}, found {len(blocks)}')
    block = blocks[0]
    def replace(match):
        line_start = block.group(0).rfind('\n', 0, match.start()) + 1
        if '#' in block.group(0)[line_start:match.start()]:
            return match.group(0)
        return edit_hotzone(tuple(int(match.group(i)) for i in range(1, 5)), match.group(5))
    edited = HOTZONE_PATTERN.sub(replace, block.group(0))
    return map_data[:block.start()] + edited + map_data[block.end():]

def hotzone_text(rect, rest):
    return 'hotzone < rect {} {} {} {}{}>'.format(*rect, rest)

for screen_name, changes in HOTZONE_RECT_CHANGES.items():
    unused = set(changes)
    def resize(rect, rest):
        if rect not in changes: return hotzone_text(rect, rest)
        unused.discard(rect)
        return '' if changes[rect] is None else hotzone_text(changes[rect], rest)
    map_data = edit_hotzones(map_data, screen_name, resize)
    if unused: raise SystemExit(f'mapData.txt: no hotzone {unused} in scrn {screen_name}')

for screen_name, pointers in HOTZONE_POINTERS.items():
    resized = HOTZONE_RECT_CHANGES.get(screen_name, {})
    pointer_by_rect = {resized.get(rect, rect): pointer for rect, pointer in pointers.items()} if isinstance(pointers, dict) else None
    unused = set(pointer_by_rect or ())
    def point(rect, rest):
        pointer = pointers if pointer_by_rect is None else pointer_by_rect.get(rect)
        unused.discard(rect)
        return hotzone_text(rect, rest if pointer is None else f'{rest.rstrip()} cursor {pointer} ')
    map_data = edit_hotzones(map_data, screen_name, point)
    if unused: raise SystemExit(f'mapData.txt: no hotzone {unused} in scrn {screen_name}')
(output_dir / 'mapData.txt').write_bytes(map_data.encode('latin-1'))
print('done')
