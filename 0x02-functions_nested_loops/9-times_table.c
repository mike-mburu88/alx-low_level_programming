#include "main.h"
/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
int number, multiple, product;
for (number = 0; number <= 9; number++)
{
_putchar('0');
for (mutiple = 1; multiple <= 9; multiple++)
{
_putchar(',');
_putchar(' ');
product = number * mutiple
if (product <= 9)
_putchar (' ');
else
_putchar((product / 10) + '0');
_putchar((product % 10) + '0'));
}
_putchar('\n');
}
