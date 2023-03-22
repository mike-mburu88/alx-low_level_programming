#!/usr/bin/python3
"""determines the parameter of a island using grids"""


def island_perimeter(grid):
    """gives the parameter of the island as return value
    the grid representation for land is 1 and water 0
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    height = len(grid)
    width = len(grid[0]
    edges = 0
    size = 0


    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
