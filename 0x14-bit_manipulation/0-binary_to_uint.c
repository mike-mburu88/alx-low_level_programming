#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - converts a binary number to unsigned int
 *@b: the binary value argument
 *Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int value;
int length;
int base_2;
if (!b)
return (0);
value = 0;
for (length = 0; b[length] != '\0'; length++)
for (length--, base_2 = 1; length >= 0; length--, base_2 *= 2)
{
if (b[length] != '0' && b[length] != '1')
{
return (0);
}
if (b[length] & 1)
{
value += base_2;
}
}
return (value);
}
