#include "main.h"
/**
 *get_bit - returns the value of an index bit
 *@index: the index variable starting from 0
 *@n: integer variable for binary bit
 *Return: index value, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int x;
if (n == 0 && index < 64)
return (0);
for (x = 0; x <= 63; n >>= 1, x++)
{
if (index == x)
{
return (n & 1);
}
}
return (-1);
}
