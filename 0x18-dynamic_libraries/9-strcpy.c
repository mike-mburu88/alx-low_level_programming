#include "main.h"

/**
 **_strcpy -  function that copies the string pointed to by src
 *@dest: destination variable
 *@src: source variable
 *Return: string type
 */
char *_strcpy(char *dest, char *src)
{
int d = 0;
while (*(src + d) != '\0')
{
*(dest + d) = *(src + d);
d++;
}
*(dest + d) = '\0';
return (dest);
}
