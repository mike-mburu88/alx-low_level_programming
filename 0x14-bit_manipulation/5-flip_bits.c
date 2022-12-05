#include "main.h"

/**
 *flip_bits - returns the number of bits flipped
 *@m: the string argument
 *@n: the integer variable for the function
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int bit_num;
for (bit_num = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
bit_num++;
}
return (bit_num);
}
