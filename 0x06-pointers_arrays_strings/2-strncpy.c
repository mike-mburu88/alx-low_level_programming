#include "main.h"

/**
 **_strncpy - a function that copies a string
 *@dest: The string argument 1
 *@src: The second string argument
 *@n: the number of characters in the string
 *Return: null value
 */

char *_strncpy(char *dest, char *src, int n)
{
int x;
x = 0;
while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
