#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_strlen - a function that checks for string length
 *@s: a string variable for an array of elements
 *Return: Always 1
 */
int _strlen(char *s)
{
unsigned int y;
y = 0;
while (s[y] != '\0')
{
y++;
}
return (y);
}
/**
 *str_concat - a function that concactates 2 strings
 *@s1: the first array string variable
 *@s2: the second string variable
 *Return: An array
 */
char *str_concat(char *s1, char *s2)
{
char *dst;
unsigned int a, b, xsize;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
xsize = (_strlen(s1) + _strlen(s2) + 1);
dst = (char *) malloc(xsize *sizeof(char));
if (dst == 0)
{
return (NULL);
}
for (a = 0; *(s1 + a) != '\0'; a++)
*(dst + a) = *(s1 + a);
for (b = 0; *(s2 + b) != '\0'; b++)
{
*(dst + a) = *(s2 + b);
a++;
}
return (dst);
}
