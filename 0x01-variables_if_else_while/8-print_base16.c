#include  <stdio.h>

/**
 * main - A program to print numbers to base 16
 * Return: Always 0
 */

int main(void)
{
int num;
char x;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
