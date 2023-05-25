#!/usr/bin/python3
"""Module to implement the calculation of an island's
perimeter
"""

def island_perimeter(grid):
    """Calculates the island's perimeter

    Args:
        grid (list): a list of integers

    Returns:
        the perimeter of the island
    """
    if grid and len(grid) > 0:
        rows = len(grid)
        column = len(grid[0])
        perimeter = 0
        for lst in range(0, rows):
            for idx in range(0, column):
                if grid[lst][idx] == 1:
                    perimeter += 4
                    if idx > 0 and grid[lst][idx - 1] == 1:
                        perimeter -= 2
                    if lst > 0 and grid[lst - 1][idx] == 1:
                        perimeter -= 2
    return perimeter
                    
