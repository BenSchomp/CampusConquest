"""Walkthrough stops drawn over the real URI Kingston campus (OpenStreetMap buildings and paths)."""
import json, math, sys
import matplotlib, networkx as nx, numpy as np
matplotlib.use('Agg')
import matplotlib.pyplot as plt
from matplotlib.patches import Ellipse

osm_path, out_path = sys.argv[1], sys.argv[2]
elements = json.load(open(osm_path))['elements']
LAT0, LON0 = 41.486, -71.528
KX, KY = math.cos(math.radians(LAT0)) * 111320, 110540
to_xy = lambda point: ((point['lon'] - LON0) * KX, (point['lat'] - LAT0) * KY)

GAME_BUILDINGS = {'Memorial Union': '#d9534f', 'Bliss Hall': '#3e7cc9', 'Lippitt Hall': '#3c9a5f',
                  'Ranger Hall': '#8a5cc2', 'Carothers Library': '#e08a1e'}
LABELS = {'Carothers Library': 'Library'}
buildings, graph = {}, nx.Graph()
fig = plt.figure(figsize=(17, 11), facecolor='#faf8f3')
ax = fig.add_axes([0.0, 0.0, 0.64, 1.0]); ax.set_facecolor('#f1efe8'); ax.set_aspect('equal'); ax.axis('off')

for element in elements:
    if 'geometry' not in element: continue
    points = np.array([to_xy(p) for p in element['geometry']])
    tags = element['tags']
    if 'highway' in tags:
        kind = tags['highway']
        width = {'primary': 3.5, 'tertiary': 3, 'unclassified': 2.4, 'residential': 2.4, 'service': 1.8}.get(kind, 1.0)
        color = '#ffffff' if kind not in ('footway', 'path', 'steps', 'pedestrian', 'cycleway') else '#dcd6c8'
        ax.plot(points[:, 0], points[:, 1], color=color, linewidth=width, zorder=1, solid_capstyle='round')
        penalty = 1.0 if kind in ('footway', 'path', 'pedestrian', 'steps') else 1.4
        for a, b in zip(element['geometry'], element['geometry'][1:]):
            pa, pb = to_xy(a), to_xy(b)
            graph.add_edge(pa, pb, weight=penalty * math.dist(pa, pb))
    elif 'building' in tags:
        name = tags.get('name', '')
        color = GAME_BUILDINGS.get(name)
        ax.fill(points[:, 0], points[:, 1], color=color or '#cfcabd', alpha=0.85 if color else 1, edgecolor='#a9a395', linewidth=0.5, zorder=2)
        if color: buildings[name] = points.mean(axis=0)
        elif name and abs(points[:, 0].mean()) < 330 and -250 < points[:, 1].mean() < 320:
            ax.text(*points.mean(axis=0), name, fontsize=6.5, ha='center', va='center', color='#8a8475', zorder=3)

QUAD = np.array([55.0, 55.0])
ax.add_patch(Ellipse(QUAD, 150, 120, angle=-15, facecolor='#9cc46a', alpha=0.28, edgecolor='#7aa33a', linewidth=1.2, zorder=1.5))
ax.text(QUAD[0] + 10, QUAD[1] - 50, 'Quadrangle', fontsize=12, fontweight='bold', color='#5d7f2b', zorder=9)
for name, center in buildings.items():
    label_offset = {'Carothers Library': (0, 30), 'Lippitt Hall': (0, 80), 'Memorial Union': (0, -95), 'Bliss Hall': (0, -30), 'Ranger Hall': (0, -30)}[name]
    ax.text(center[0] + label_offset[0], center[1] + label_offset[1], LABELS.get(name, name), fontsize=12, fontweight='bold',
            ha='center', va='center', color=GAME_BUILDINGS[name], zorder=9,
            bbox=dict(boxstyle='round,pad=0.2', facecolor='#faf8f3', edgecolor='none', alpha=0.85))

# (where, small offset in metres so stops in one building don't overlap, title, note)
STOPS = [
    ('Memorial Union', (-22, 18), 'Read the letter in your mailbox', 'Unlocks the Union exit. Stepping outside also puts\na key in the box for step 10.'),
    ('Bliss Hall', (-14, 0), 'Call the Bliss Hall elevator', 'Ride it to the 2nd floor.'),
    ('Bliss Hall', (16, 12), 'Presidents puzzle (Bliss 2nd-floor classroom)', 'Unlocks the Lippitt Hall door.'),
    ('Lippitt Hall', (0, 0), 'Array game at the clock (Lippitt Hall)', 'Unlocks the Ranger Hall door.'),
    ('Ranger Hall', (-18, 0), 'Flip the light switch (Ranger Hall)', 'Lights the dark room ahead.'),
    ('Ranger Hall', (18, 0), 'Towers of Hanoi (Ranger Hall)', 'Unlocks the Library exit.'),
    ('Quadrangle', (0, 0), 'Clue: the "1994" brick on the Quad', 'The call box code.'),
    ('Carothers Library', (-20, -12), 'Enter 1994 on the Library call box', 'Unlocks the Library doors.'),
    ('Carothers Library', (18, 10), 'Sliding box puzzle (Library computer)', 'Unlocks the Union side door.'),
    ('Memorial Union', (20, 16), 'Take the key from the box (Union)', 'Opens the Union hall door.'),
    ('Memorial Union', (0, -22), 'Eight Queens (Union hall)', 'Wins the trophy.'),
]
# Where each building's route meets the walkways (its door side), in metres from the building's centre.
DOORS = {'Memorial Union': (0, 45), 'Bliss Hall': (-15, -35), 'Lippitt Hall': (0, -45), 'Ranger Hall': (0, 25),
         'Carothers Library': (0, -60), 'Quadrangle': (0, 0)}
door = lambda where: (QUAD if where == 'Quadrangle' else buildings[where]) + np.array(DOORS[where])
spot = lambda where, offset: (QUAD if where == 'Quadrangle' else buildings[where]) + np.array(offset)
nodes = np.array(list(graph.nodes))
nearest = lambda point: tuple(nodes[np.argmin(((nodes - point) ** 2).sum(axis=1))])
cmap = matplotlib.colormaps['plasma']
colour_of = lambda index: cmap(0.08 + 0.8 * index / (len(STOPS) - 1))
start = spot('Memorial Union', (-30, -5))
previous_where, previous_point = 'Memorial Union', start
for index, (where, offset, title, note) in enumerate(STOPS):
    point = spot(where, offset)
    if where == previous_where:
        line = np.array([previous_point, point]); style = (0, (2, 2))
    else:
        path = nx.shortest_path(graph, nearest(door(previous_where)), nearest(door(where)), weight='weight')
        line = np.array([previous_point, *path, point]); style = '-'
    jitter = (index % 3 - 1) * 2.5
    ax.plot(line[:, 0] + jitter, line[:, 1] + jitter, color=colour_of(index), linewidth=3, alpha=0.9, zorder=5, linestyle=style, solid_capstyle='round')
    previous_where, previous_point = where, point
for index, (where, offset, title, note) in enumerate(STOPS):
    x, y = spot(where, offset)
    ax.scatter(x, y, s=430, color='white', edgecolor=colour_of(index), linewidth=3, zorder=7)
    ax.text(x, y, str(index + 1), ha='center', va='center', fontsize=11, fontweight='bold', color='#222', zorder=8)
ax.scatter(*start, s=150, marker='*', color='#222', zorder=8)
ax.text(start[0] - 8, start[1], 'START', ha='right', va='center', fontsize=10, fontweight='bold', zorder=8,
        bbox=dict(boxstyle='round,pad=0.15', facecolor='#faf8f3', edgecolor='none', alpha=0.85))
ax.annotate('N', xy=(285, 300), xytext=(285, 255), ha='center', fontsize=13, fontweight='bold',
            arrowprops=dict(arrowstyle='-|>', color='#333', linewidth=1.5), zorder=9)
ax.plot([180, 280], [-240, -240], color='#333', linewidth=2.5, zorder=9); ax.text(230, -232, '100 m', ha='center', fontsize=9, zorder=9)
ax.set_xlim(-330, 310); ax.set_ylim(-255, 320)

legend = fig.add_axes([0.65, 0.02, 0.34, 0.94]); legend.axis('off')
put = lambda x, y, text, **style: legend.text(x, y, text, transform=legend.transAxes, va='top', **style)
put(0, 1.0, 'Campus Conquest walkthrough', fontsize=18, fontweight='bold', color='#222')
put(0, 0.958, 'URI Kingston campus core. Buildings and paths from\nOpenStreetMap; the route follows real walkways.', fontsize=10, color='#555')
y = 0.88
for index, (where, offset, title, note) in enumerate(STOPS):
    legend.scatter(0.03, y - 0.012, s=360, color='white', edgecolor=colour_of(index), linewidth=2.5, transform=legend.transAxes, clip_on=False)
    legend.text(0.03, y - 0.012, str(index + 1), ha='center', va='center', fontsize=10, fontweight='bold', transform=legend.transAxes)
    put(0.08, y, title, fontsize=11.5, fontweight='bold', color='#222')
    put(0.08, y - 0.027, note, fontsize=9.5, color='#555')
    y -= 0.073
put(0, 0.04, 'Map data © OpenStreetMap contributors', fontsize=8, color='#888')
fig.savefig(out_path, dpi=110, facecolor=fig.get_facecolor())
