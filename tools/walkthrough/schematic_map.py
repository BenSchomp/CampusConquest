"""Draw the schematic overhead map with the numbered walkthrough."""
import sys
import networkx as nx, numpy as np, matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
from matplotlib.patches import Polygon
from scipy.spatial import ConvexHull
from places import build, area_of
from route import legs

map_path, out_path = sys.argv[1], sys.argv[2]
start, screens, place_of, edges = build(map_path)
graph = nx.Graph()
for (a, b) in edges: graph.add_edge(a, b)
pos = nx.kamada_kawai_layout(graph)
pos = {node: np.array(xy) for node, xy in pos.items()}

AREA_COLORS = {'Memorial Union': '#d9534f', 'Bliss Hall': '#3e7cc9', 'Lippitt Hall': '#3c9a5f', 'Ranger Hall': '#8a5cc2',
               'Library': '#e08a1e', 'Quadrangle': '#7aa33a', 'Outside': '#9a9a9a'}
fig = plt.figure(figsize=(17, 11), facecolor='#faf8f3')
ax = fig.add_axes([0.01, 0.02, 0.62, 0.92]); ax.set_facecolor('#faf8f3'); ax.axis('off'); ax.set_aspect('equal')

for area, color in AREA_COLORS.items():
    nodes = [node for node in graph if area_of(node) == area]
    if area == 'Outside' or len(nodes) < 3: continue
    points = np.array([pos[node] for node in nodes])
    center = points.mean(axis=0)
    padded = np.vstack([points + 0.035 * np.array([np.cos(a), np.sin(a)]) for a in np.linspace(0, 2 * np.pi, 16, endpoint=False)])
    hull = padded[ConvexHull(padded).vertices]
    ax.add_patch(Polygon(hull, closed=True, facecolor=color, alpha=0.14, edgecolor=color, linewidth=1.5))
    top = hull[np.argmax(hull[:, 1])]
    below = area in ('Memorial Union', 'Quadrangle')
    label_y = hull[:, 1].min() - 0.025 if below else hull[:, 1].max() + 0.025
    ax.text(center[0], label_y, area, ha='center', va='top' if below else 'bottom', fontsize=13, fontweight='bold', color=color, zorder=9,
            bbox=dict(boxstyle='round,pad=0.2', facecolor='#faf8f3', edgecolor='none', alpha=0.85))

for a, b in graph.edges:
    ax.plot(*zip(pos[a], pos[b]), color='#cfcac0', linewidth=2.2, zorder=1, solid_capstyle='round')
for node in graph:
    ax.scatter(*pos[node], s=14, color=AREA_COLORS[area_of(node)], zorder=2, alpha=0.8)
ax.text(*(pos['union8'] + np.array([0.03, -0.01])), 'START', fontsize=10, fontweight='bold', color='#222', zorder=6)
ax.scatter(*pos['union8'], s=110, marker='*', color='#222', zorder=6)

route_legs = legs()
cmap = matplotlib.colormaps['plasma']
numbered = [leg for leg in route_legs if leg[1]]
for index, (screen, title, note, path) in enumerate(route_legs):
    places = [place_of[name] for name in path if name in place_of]
    places = [p for i, p in enumerate(places) if i == 0 or p != places[i - 1]]
    color = cmap(0.08 + 0.8 * index / (len(route_legs) - 1))
    xy = np.array([pos[p] for p in places])
    offset = (index % 3 - 1) * 0.006
    if len(xy) > 1: ax.plot(xy[:, 0] + offset, xy[:, 1] + offset, color=color, linewidth=2.6, alpha=0.85, zorder=3)
used = {}
for number, (screen, title, note, path) in enumerate(numbered, start=1):
    place = place_of[screen]
    shift = used.get(place, 0); used[place] = shift + 1
    x, y = pos[place] + np.array([0.035 * shift, 0.035 * shift])
    color = cmap(0.08 + 0.8 * route_legs.index((screen, title, note, path)) / (len(route_legs) - 1))
    ax.scatter(x, y, s=560, color='white', edgecolor=color, linewidth=3, zorder=7)
    ax.text(x, y, str(number), ha='center', va='center', fontsize=12, fontweight='bold', color='#222', zorder=8)

legend = fig.add_axes([0.64, 0.02, 0.35, 0.92]); legend.axis('off')
legend.text(0, 1.0, 'Campus Conquest walkthrough', fontsize=18, fontweight='bold', va='top', color='#222', transform=legend.transAxes)
legend.text(0, 0.955, 'Schematic map: places are laid out by how they connect,\nnot by real campus distances. Floors are flattened.', fontsize=10, va='top', color='#555', transform=legend.transAxes)
y = 0.88
for number, (screen, title, note, path) in enumerate(numbered, start=1):
    color = cmap(0.08 + 0.8 * route_legs.index((screen, title, note, path)) / (len(route_legs) - 1))
    legend.scatter(0.03, y - 0.012, s=380, color='white', edgecolor=color, linewidth=2.5, transform=legend.transAxes, clip_on=False)
    legend.text(0.03, y - 0.012, str(number), ha='center', va='center', fontsize=10, fontweight='bold', transform=legend.transAxes)
    legend.text(0.08, y, title, fontsize=11.5, fontweight='bold', va='top', color='#222', transform=legend.transAxes)
    legend.text(0.08, y - 0.027, note, fontsize=9.5, va='top', color='#555', transform=legend.transAxes)
    y -= 0.073
fig.savefig(out_path, dpi=110, facecolor=fig.get_facecolor())
