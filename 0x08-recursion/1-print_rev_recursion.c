#include "main.h"

/**
 *_print_rev_recursion - function that prints a string in reverse
 *@s: string variable to be printed in reverse
 *Return: string variable
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
