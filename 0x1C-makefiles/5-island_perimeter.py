#!/usr/bin/python3
"""Defines perimeter of an island."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    adjecent = 0
    size = 0

    for k in range(height):
        for s in range(width):
            if grid[k][s] == 1:
                size += 1
            if (s > 0 and grid[k][s - 1] == 1):
                adjecent += 1
            if (k > 0 and grid[k - 1][s] == 1):
                adjecent += 1
    return size * 4 - (adjecent * 2)
