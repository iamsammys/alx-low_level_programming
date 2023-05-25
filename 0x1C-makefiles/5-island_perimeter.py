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
        perimeter = 0
        i = 0
        while i < len(grid):
            j = 0
            while j < len(grid[i]):
                if grid[i][j] == 1:
                    perimeter += 4
                    if grid[i][j-1] and grid[i][j-1] == 1:
                        perimeter -= 2
                    if grid[i-1][j] and grid[i][j] == 1:
                        perimeter -= 2
                j += 1
            i += 1
    return perimeter
                    
