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
for (i = 0; i < x; i++)
{
x--;
p = s[i];
s[i] = s[x];
s[x] = p;
}
}
