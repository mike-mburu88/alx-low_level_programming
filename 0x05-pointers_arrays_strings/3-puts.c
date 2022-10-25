#include "main.h"

/**
 *_puts - functions to print a string
 *@str: string pointer variable
 *return: value
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
