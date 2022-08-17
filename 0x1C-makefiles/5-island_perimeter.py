#!/usr/bin/python3
"""
This Script provides the function to
compute the perimeter of an Island
"""


def island_perimeter(grid):
    """Function that returns the perimeter"""
    perimeterCount = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                perimeterCount += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeterCount -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeterCount -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeterCount -= 1
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 1:
                    perimeterCount -= 1
    return perimeterCount
