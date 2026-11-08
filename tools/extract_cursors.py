"""Extract the game's cursor resources from the original .exe into PNGs (plus hotspots)."""
import json, struct, sys, io
import pefile
from PIL import Image

exe_path, output_dir = sys.argv[1], sys.argv[2]
pe = pefile.PE(exe_path)
resources_by_type = {t.id: t for t in pe.DIRECTORY_ENTRY_RESOURCE.entries}

def resource_bytes(type_id, resource_id):
    for entry in resources_by_type[type_id].directory.entries:
        if entry.id == resource_id:
            lang = entry.directory.entries[0]
            return pe.get_data(lang.data.struct.OffsetToData, lang.data.struct.Size)
    raise KeyError((type_id, resource_id))

RT_CURSOR, RT_GROUP_CURSOR = 1, 12
hotspots = {}
for group_entry in resources_by_type[RT_GROUP_CURSOR].directory.entries:
    group = resource_bytes(RT_GROUP_CURSOR, group_entry.id)
    cursor_id = struct.unpack_from('<H', group, 6 + 12)[0]
    data = resource_bytes(RT_CURSOR, cursor_id)
    hotspot_x, hotspot_y = struct.unpack_from('<HH', data, 0)
    dib = data[4:]
    cur_file = struct.pack('<HHH', 0, 2, 1) + struct.pack('<BBBBHHII', 32, 32, 0, 0, hotspot_x, hotspot_y, len(dib), 22) + dib
    image = Image.open(io.BytesIO(cur_file)).convert('RGBA')
    image.save(f'{output_dir}/cursor{group_entry.id}.png')
    hotspots[group_entry.id] = [hotspot_x, hotspot_y]
print(json.dumps(hotspots))
