#include <stdio.h>

/**
* main - prints every uppercase and lowercase letter
* Return: Always 0
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
