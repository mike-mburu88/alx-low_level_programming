#include <stdio.h>

/**
* main - prints every uppercase and lowercase letter
* Return: Always 0
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch + '\n');
return (0);
}
