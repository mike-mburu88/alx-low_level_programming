#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
***alloc_grid - a function that returns a pointer to a 2D array
*@width: array variable representing number of array columns
*@height: array variable representing number of array rows
*Return: NULL value if fail otherwise 0
*/
int **alloc_grid(int width, int height)
{
int x;
int y;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (x = 0; x < height; x++)
grid = malloc(sizeof(int) * width);
if (grid[x] == NULL)
{
for (x = x - 1; x >= 0; x--)
{
free(grid[x]);
}
free(grid);
return (NULL);
}
for (x = 0; y < width; y++)
grid[x][y] = 0;
return (grid);
}
