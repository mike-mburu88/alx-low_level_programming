#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *_strlen - a function that allows to count arrays
 *@s: a string array
 *Return: Always 1
 */
int _strlen(char *s)
{
unsigned int x;
x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}
/**
 *_strcpy - a function used to copy arrays
 *@src: source argument array
 *@dest: destination argument array
 *Return: destination array value
 */

char *_strcpy(char *dest, char *src)
{
int x = 0;
while (src[x] != '\0')
{
dest[x] = src[x];
x++;
}
dest[x] = '\0';
return (dest);
}

/**
 **_strdup - function that returns a pointer to a newly allocated space
 *@str: character variable
 *Return: NULL of null value or insufficient memory
 */
char *_strdup(char *str)
{
char *dst;
unsigned int xsize;
if (str == 0)
{
return (NULL);
}
xsize = _strlen(str) + 1;
dst = (char *) malloc(xsize *sizeof(char));
if (dst == 0)
{
return (NULL);
}
_strcpy(dst, str);
return (dst);
}
