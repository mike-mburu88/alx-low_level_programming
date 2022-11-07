#include "main.h"
/**
 **_strchr - a function that locates a character in a string
 *@s: string variable
 *@c: char variable to be located
 *Return: locational value of string variable in the string
 */
char *_strchr(char *s, char c)
{
int y;
for (y = 0; s[y] >= '\0'; y++)
{
if (s[y] == c)
return (s + y);
}
return ('\0');
}
