#!/usr/bin/python3
"""
This File calculates perimeter of an island
to specific specifications
"""


def island_perimeter(grid):
    """
    This function accepts value grid
    which is a list that contains lists
    which contain 1 and 0
    """

    perimeter = 0
    for gridline in grid:

        for cell in gridline:

            if cell == 1:
                perimeter += 1
            else:
                continue

    if perimeter == 0:
        return(perimeter)

    else if perimeter == 1:

        perimeter = perimeter * 4

        return(perimeter)

    else:

        perimeter = (perimeter * 2) + 2

        return (perimeter)
