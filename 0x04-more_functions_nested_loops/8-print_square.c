#include "main.h"

/**
 *print_square - a function to print a square
 *@size: a variable for the size of the square
 *Return: Void
 */

void print_square(int size)
{
int x, y;
if (size <= 0)
_putchar('\n');
for (x = 0; x < size; x++)
{
for (y = 0; y < (size); y++)
{
_putchar('#');
}
_putchar('\n');
}
}
