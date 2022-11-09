#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *free_grid - frees a 2D grid previously created by alloc_grid function
 *@grid: variable for the 2D array
 *@height: a variable for height
 *Return: NULL
 */
void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
free(grid[x]);
}
free(grid);
}
