#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 **malloc_checked - function that allocates memory
 *@b: function variable used for the allocation
 *Return: pointer variable
 */
void *malloc_checked(unsigned int b)
{
void *n;
n = malloc(b);
if (n == NULL)
{
exit(98);
}
return (n);
}
