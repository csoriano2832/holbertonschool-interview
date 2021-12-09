#!/usr/bin/python3
""" This module contains one method:
    canUnlockAll(boxes)
"""


def canUnlockAll(boxes):
    """ This method checks if all boxes in a list can be unlocked """
    keyset = [0]
    for key in keyset:
        for content in boxes[key]:
            if content not in keyset and content < len(boxes):
                keyset.append(content)

    return len(keyset) == len(boxes)
