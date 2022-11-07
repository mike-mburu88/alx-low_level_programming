#include "main.h"

/**
 **_memset - function that fills memory with a constant byte
 *@s: string variable
 *@b: second character argument
 *@n: integer variable for the byte
 *Return:  string value
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
s[x] = b;
return (s);
}
