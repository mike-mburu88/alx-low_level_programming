#include "main.h"

/**
 *puts_half - a function that prints half of a string
 *@str: a string argument
 *return: value
 */
void puts_half(char *str)
{
int x = 0;
while (*str != '\0')
{
x++;
str++;
}
str -= (x / 2);
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
