#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0
 *@n: integer argument for the function
 *@index: the index value argument
 *Return: 1 if success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int x;
if (index > 63)
return (-1);
x = 1 << index;
if (*n & x)
*n ^= x;
return (1);
}
