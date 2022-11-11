#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 **_calloc - function that allocates memory for an array
 *@nmemb: integer variable for array position
 *@size: integer variable for array size
 *Return: a NULL value for array size 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int x;
if (nmemb == 0 || size == 0)
return (NULL);
array = malloc(nmemb * size);
if (array == NULL)
return (NULL);
for (x = 0; x < nmemb * size; x++)
array[x] = 0;
return (array);
}
