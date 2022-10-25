#include "main.h"

/**
 *print_rev - function to print a string in reverse
 *@s: the string argument
 *Return: value
 */
void print_rev(char *s)
{
int l = 0;
while (s[l] != '\0')
l++;
for (l = l - 1; l >= 0; l--)
_putchar(s[l]);
_putchar('\n');
}
