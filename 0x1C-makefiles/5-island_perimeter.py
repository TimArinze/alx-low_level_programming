#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ island_perimeter """

    perimeter = 0
    for i in range(len(grid) + 1):
        for j in range(len(grid[i]) + 1):
            if grid[0][j] == 1:
                return 0
            elif grid[i][0] == 1:
                return 0
            elif grid[i][j] == 1:
                if grid[i][j-1] == 0:
                    perimeter = perimeter + 1
                else:
                    perimeter = perimeter
                if grid[i][j+1] == 0:
                    perimeter = perimeter + 1
                else:
                    perimeter = perimeter
                if grid[i-1][j] == 0:
                    perimeter = perimeter + 1
                else:
                    perimeter = perimeter
                if grid[i+1][j] == 0:
                    perimeter = perimeter + 1
                else:
                    perimeter = perimeter
    return perimeter
