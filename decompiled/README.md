`Campus-Conquest-v2.1.decompiled.c` is Ghidra 11.4.2's decompile of the original exe (auto-generated
names, so FUN_00405a90 and friends). `CreateFromPointers.java` and `DecompileAll.java` are the headless
scripts that produced it:

    analyzeHeadless <project dir> cc -import Campus-Conquest-v2.1.exe \
      -postScript CreateFromPointers.java -postScript DecompileAll.java out.c

Useful entry points: FUN_00402a10 (window procedure / state machine), FUN_00404890 (mapData.txt
parser), FUN_00405a90 (hotzone clicks), FUN_004035f0 (drawing), FUN_00402c30 (menu),
FUN_00402e60 (title screen). Puzzles: Box 0x4024d0, Array 0x403e30, Presidents 0x406710,
Eight Queens 0x406c80, Towers 0x407d10.
