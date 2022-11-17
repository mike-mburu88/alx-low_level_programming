#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - executes a function given as a parameter
 *@array: pointer variable for the function
 *@action: the pointer to the function
 *@size: the array size variable
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int parameter;
if (!array || !action)
return;
for (parameter = 0; parameter < size; parameter++)
action(array[parameter]);
}
