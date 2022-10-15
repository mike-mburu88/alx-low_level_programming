# include <stdio.h>
/**
 *main - Program to print single digit numbers
 *Return: Always 0
 */

int main(void)
{
int y;
for  (y = 0; y < 10; y++)
putchar ((y % 10) + '0');
putchar('\n');
return (0);
}
