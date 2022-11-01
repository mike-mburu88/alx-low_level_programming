#include "main.h"
/**
 **_memcpy -function that copies memory area
 *@dest: destination variable for memory to copy variable
 *@src: source variable from which memory is copied
 *@n: the number of bytes to be copied
 *Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int y;
for  (y = 0; y < n; y++)
{
dest[y] = src[y];
}
return (dest);
}
