#include "function_pointers.h"

/**
 *int_index - function that searches for an integer
 *@array: a function pointer
 *@cmp: the pointer to the comparing function
 *@size: variable for the array size
 *Return: 0 if cmp doesnt match, -1 if a match is found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (cmp && array)
{
for (x = 0; x < size; x++)
{
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);
}
