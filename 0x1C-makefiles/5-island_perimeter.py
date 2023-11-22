#!/usr/bin/python3

"""
# Island Perimeter:
#
# This function takes a grid of 0s (water) and 1s (land) and returns
# the perimeter of the island described in the grid.
#
# Arguments:
# grid: A list of lists of integers, where 0 represents water and 1
# represents land.
#
# Returns:
# An integer representing the perimeter of the island.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """

    c = 0

    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    c += 1
                if i == len(grid) - 1 or grid[i + 1][j] != 1:
                    c += 1
                if j == 0 or grid[i][j - 1] != 1:
                    c += 1
                if j == len(row) - 1 or grid[i][j + 1] != 1:
                    c += 1

    return c
