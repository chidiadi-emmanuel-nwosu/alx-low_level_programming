#!/usr/bin/python3
"""
    perimeter module
"""


def island_perimeter(grid):
    """that returns the perimeter of
       the island described in grid
    """
    check = 0
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1 and check == 0:
                perimeter += 4
                check = 1
            elif grid[i][j] == 1 and check == 1:
                perimeter += 2

    return perimeter

