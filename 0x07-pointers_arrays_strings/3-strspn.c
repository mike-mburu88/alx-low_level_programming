#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: character variable for the number of bytes
 *@accept: character variable with byte number
 *Return: number of bytes in the first segment
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes;
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
{
bytes++;
break;
}
else if (accept[x + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
