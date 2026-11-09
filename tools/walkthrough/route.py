"""Walkthrough legs: from each step's spot to the next, through the world as it is at that point."""
import sys
import world as base
from statesearch import EVENTS, screens_for

# (screen where it happens, event it fires or None for a clue, short title, what it does)
STEPS = [
    ('letter', ('trigger', 'letter'), 'Read the letter in your mailbox', 'Unlocks the Union exit. Stepping outside also puts\na key in the box for step 10.'),
    ('ru7-ru6', ('trigger', 'ru7-ru6'), None, None),
    ('blisselevclosed', ('set', 'blissElevClosed=blissElevClosed2'), 'Call the Bliss Hall elevator', 'Ride it to the 2nd floor.'),
    ('blissclassdoor', ('puzzle', 'P'), 'Presidents puzzle (Bliss 2nd-floor classroom)', 'Unlocks the Lippitt Hall door.'),
    ('clock6', ('puzzle', 'A'), 'Array game at the clock (Lippitt Hall)', 'Unlocks the Ranger Hall door.'),
    ('ranger20-21', ('set', 'ranger20-21=ranger20-21_light'), 'Flip the light switch (Ranger Hall)', 'Lights the dark room ahead.'),
    ('ranger24-25', ('puzzle', 'T'), 'Towers of Hanoi (Ranger Hall)', 'Unlocks the Library exit.'),
    ('brickclue', None, 'Clue: the "1994" brick on the Quad', 'The call box code.'),
    ('callbox4', ('set', 'libDoorsClosed=libDoorsUnlocked'), 'Enter 1994 on the Library call box', 'Unlocks the Library doors.'),
    ('libmon-a', ('puzzle', 'B'), 'Sliding box puzzle (Library computer)', 'Unlocks the Union side door.'),
    ('boxwithoutkey', ('trigger', 'boxwithoutkey'), 'Take the key from the box (Union)', 'Opens the Union hall door.'),
    ('unionhalldooropen', ('puzzle', 'E'), 'Eight Queens (Union hall)', 'Wins the trophy.'),
]

def legs():
    done, position, result = 0, base.start, []
    for screen, event, title, note in STEPS:
        parent = base.bfs(screens_for(done), position)
        if screen not in parent: raise SystemExit(f'cannot reach {screen} from {position}')
        result.append((screen, title, note, base.path_to(parent, screen)))
        if event: done |= 1 << EVENTS.index(event)
        if screen == 'ru7-ru6': pass
        position = screen
    parent = base.bfs(screens_for(done), position)
    if 'winner' not in parent: raise SystemExit('ending not reachable')
    return result

if __name__ == '__main__':
    for screen, title, note, path in legs(): print(title, len(path))
