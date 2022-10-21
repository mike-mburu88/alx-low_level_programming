#include "main.h"

/**
 * print_diagonal - function that prints the diagonal
 *@n: the variable for the number of times
 *Return: Void
 */

void print_diagonal(int n)
{
int x, y;
if (n <= 0)
_putchar('\n');
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
