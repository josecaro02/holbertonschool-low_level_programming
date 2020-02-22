#!/usr/bin/python3
""" Program that finds the perimeter of an island of ones in a grid """


def island_perimeter(grid):
    """ Island perimeter function that returns the perimeter """
    if (not grid or len(grid) == 0):
        return (0)

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i + 1 < len(grid):
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
                if i - 1 >= 0:
                    if grid[i - 1][j] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
                if j + 1 < len(grid[0]):
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
                if j - 1 >= 0:
                    if grid[i][j - 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

    return (perimeter)
