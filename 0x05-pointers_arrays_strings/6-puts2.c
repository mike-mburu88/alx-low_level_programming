#include "main.h"

/**
 *puts2 - function that prints every character of a string
 *@str: string variable
 *Return: value
 */

void puts2(char *str)
{
int y = 0;
for (; str[y] != '\0'; y++)
{
if ((y % 2) == 0)
_putchar(str[y]);
else
continue;
}
_putchar('\n');
}
