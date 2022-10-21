#include "main.h"

/**
 *more_numbers - function that prints 0 to 14 ten times
 *Return: 0
 */

void more_numbers(void)
{
int x;
int u;
for (u = '0'; u <= '9' u++)
{
for (x = '0'; x <= 14; x++)
{
if (x >= 10)
_putchar('1');
_putchar(x % 10 + '0');
}
putchar('\n');
}
}
