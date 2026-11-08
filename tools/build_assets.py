"""Convert the original Campus Conquest assets into web-friendly files.

Usage: python3 build_assets.py <original Campus_Conquest dir> <web output dir>

- images/*.dib      -> assets/images/<lowercase name>.png (lossless)
- puzzle sprites    -> assets/sprites/*.png, cut from the *Template.dib sheets exactly where the
                       2001 engine cut them, coloured with the background's palette (the game ran
                       in 256-colour mode, so sprites always used the background's palette) and
                       with palette index 0 transparent (the DirectDraw colour key)
- sounds/*.wav      -> assets/sounds/<lowercase name>.wav (copied as-is)
- sounds/*.mid      -> assets/music/<lowercase name>.mp3 (rendered with FluidSynth, General MIDI)
- mapData.txt       -> copied unchanged
"""
import pathlib, shutil, subprocess, sys
from PIL import Image

source_dir, output_dir = pathlib.Path(sys.argv[1]), pathlib.Path(sys.argv[2])
assets = output_dir / 'assets'
for sub in ('images', 'sprites', 'sounds', 'music'):
    (assets / sub).mkdir(parents=True, exist_ok=True)

for dib in sorted((source_dir / 'images').glob('*.dib')):
    target = assets / 'images' / (dib.stem.lower() + '.png')
    if not target.exists():
        Image.open(dib).save(target, optimize=True)

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
]
map_data = (source_dir / 'mapData.txt').read_bytes().decode('latin-1')
for broken, fixed in MAP_DATA_FIXES:
    if map_data.count(broken) != 1:
        raise SystemExit(f'mapData.txt fix no longer applies: {broken!r}')
    map_data = map_data.replace(broken, fixed)
(output_dir / 'mapData.txt').write_bytes(map_data.encode('latin-1'))
print('done')
print('done')
