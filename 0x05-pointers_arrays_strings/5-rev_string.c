#include "main.h"

/**
 *rev_string - function to reverse string
 *@s: string argument
 *return: the value
 */
void rev_string(char *s)
{
char p = s[0];
int x = 0;
int i;
while (s[x] != '\0')
x++;
for (i = 0; i < x; x++)
{
x--;
p = s[x];
s[i] = s[x];
s[x] = p;
}
}
