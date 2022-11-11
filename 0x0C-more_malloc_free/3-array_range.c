#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 **array_range - function that creates an array of integers
 *@min: integer variable from minimum
 *@max: integer variable for the maximum number
 *Return: NULL if min > max; malloc failure
 */
int *array_range(int min, int max)
{
int *array;
int x = 0;
int y = min;
if (min > max)
return (0);
array = malloc((max - min + 1) * sizeof(int));
if (!array)
return (0);
while (x <= max - min)
array[x++] = y++;
return (array);
}
