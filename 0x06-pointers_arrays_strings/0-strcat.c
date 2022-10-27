#include "main.h"

/**
 **_strcat - function to concactate strings
 *@dest: character variable 1
 *@src: pointer variable for the function
 *Return: pointer variable
 */
char *_strcat(char *dest, char *src)
{
int x;
int y;
x = 0;
while (dest[x] != '\0')
{
x++;
}
y = 0;
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
