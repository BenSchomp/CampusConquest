"""Draw the two pointers added for the web version, in the 1-bit style of the original cursors.

Usage: python3 draw_cursors.py <web output dir>

- cursormagnifier.png: look closer at something (mapData `cursor 4`), hotspot at the lens centre (12, 12)
- cursorhand.png:      press or use something (mapData `cursor 5`), hotspot at the fingertip (14, 3)
"""
import math, pathlib, sys
from PIL import Image

BLACK, WHITE = (0, 0, 0, 255), (255, 255, 255, 255)
cursors_dir = pathlib.Path(sys.argv[1]) / 'assets' / 'cursors'

def draw_magnifier():
    lens_x, lens_y = 12.0, 12.0
    pixels = {}
    for y in range(32):
        for x in range(32):
            px, py = x + 0.5, y + 0.5
            distance = math.hypot(px - lens_x, py - lens_y)
            along_handle = ((px - lens_x + 0.5) + (py - lens_y + 0.5)) / 2
            across_handle = abs((px - lens_x + 0.5) - (py - lens_y + 0.5)) / math.sqrt(2)
            if 7 <= along_handle <= 18.5 and across_handle <= 2.4: pixels[x, y] = BLACK
            if distance <= 10.4: pixels[x, y] = BLACK
            if distance <= 8.0: pixels[x, y] = WHITE
            angle = math.degrees(math.atan2(py - lens_y, px - lens_x))
            if 5.0 <= distance <= 6.2 and -165 <= angle <= -105: pixels[x, y] = BLACK   # glint
    image = Image.new('RGBA', (32, 32), (0, 0, 0, 0))
    for (x, y), colour in pixels.items():
        image.putpixel((x, y), colour)
    # white outline around the black, so the pointer reads on dark photos
    for y in range(32):
        for x in range(32):
            if (x, y) not in pixels and any(pixels.get((x + dx, y + dy)) == BLACK for dx, dy in ((1, 0), (-1, 0), (0, 1), (0, -1))):
                image.putpixel((x, y), WHITE)
    return image

HAND = """
           ###
          #...#
          #...#
          #...#
          #...#
          #...#
          #...#
          #...###
          #...#..###
          #...#..#..###
          #...#..#..#..#
   ###    #...#..#..#..#
  #...#   #.........#..#
  #....#  #............#
   #....# #............#
    #....##............#
     #.................#
     #.................#
      #................#
      #...............#
       #..............#
       #..............#
        #............#
        #............#
        ##############
        ##############
"""

def draw_hand():
    image = Image.new('RGBA', (32, 32), (0, 0, 0, 0))
    for y, row in enumerate(HAND.strip('\n').split('\n')):
        for x, cell in enumerate(row):
            if cell in '#.': image.putpixel((x + 2, y + 3), BLACK if cell == '#' else WHITE)
    return image

cursors_dir.mkdir(parents=True, exist_ok=True)
draw_magnifier().save(cursors_dir / 'cursormagnifier.png')
draw_hand().save(cursors_dir / 'cursorhand.png')
