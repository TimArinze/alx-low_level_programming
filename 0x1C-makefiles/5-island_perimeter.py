#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ island_perimeter """

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if j == 0:
                    perimeter = perimeter + 1
                elif grid[i][j-1] == 0:
                    perimeter = perimeter + 1
                else:
                    perimeter = perimeter
                if j == len(grid[i]) - 1:
                    perimeter = perimeter + 1
                elif grid[i][j+1] == 0:
                        perimeter = perimeter + 1
                else:
                    perimeter = perimeter
                if i == 0:
                    perimeter = perimeter + 1
                elif grid[i-1][j] == 0:
                    perimeter = perimeter + 1
                else:
                    perimeter = perimeter
                if i == len(grid) - 1:
                    perimeter = perimeter + 1
                elif grid[i+1][j] == 0:
                    perimeter = perimeter + 1
                else:
                    perimeter = perimeter

    return perimeter
