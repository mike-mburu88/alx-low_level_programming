#include <stdio.h>

/**
 * main - print single digit combinations
 * Return: always 0
 */

int main(void)
{
int p;
for (p = 48; p < 58 ; p++)
putchar(p);
if (p != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
