#include "main.h"
/**
 *set_bit - sets the value of a bit to 1
 *@n: an integer argument
 *@index: the index argument for the string
 *Return: 1 if success, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int x;
if (index > 63)
return (-1);
x = 1 << index;
*n = (*n | x);
return (1);
}
