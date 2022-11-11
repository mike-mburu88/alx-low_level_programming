#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 **string_nconcat - function that concatenates two strings
 *@s1: the first string variable
 *@s2: the second string variable
 *@n: the integer variable for concactation
 *Return: NULL for an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
unsigned int m = 0;
unsigned int l = 0, i;
if (s2 == NULL)
s2 = "";
if (s1 == NULL)
s1 = "";
while (s1[m] != '\0')
{
m++;
}
while (s2[l] != '\0')
{
l++;
}
if (n > l)
n = l;
x = malloc((m + n + 1) * sizeof(char));
if (x == NULL)
return (0);
for (i = 0; i < m; i++)
{
x[i] = s1[i];
}
for (; i < (m + n); i++)
{
x[i] = s2[i - m];
}
x[i] = '\0';
return (x);
}

