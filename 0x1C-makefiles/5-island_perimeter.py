#!/usr/bin/python3
"""
This File calculates perimeter of an island
to specific specifications
"""


def island_perimeter(grid):

    perimeter = 0
    for gridline in grid:

        for cell in gridline:

            if cell == 1:
                perimeter += 1
            else:
                continue

    if perimeter == 1:

        perimeter = perimeter * 4

        return(perimeter)

    else:

        perimeter = (perimeter * 2) + 2

        return (perimeter)
