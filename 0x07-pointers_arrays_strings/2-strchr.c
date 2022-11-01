#include "main.h"
/**
 **_strchr - a function that locates a character in a string
 *@s: string variable
 *@c: char variable to be located
 *Return: locational value of string variable in the string
 */
char *_strchr(char *s, char c)
{
int x = 0;
int y;
while (s[x])
x++;
for (y = 0; y < x; y++)
{
if (c == s[y])
s += y;
return (s);
}
return ('\0');
}
