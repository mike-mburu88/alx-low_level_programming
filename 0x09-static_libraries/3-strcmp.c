#include "main.h"

/**
 *_strcmp - function that compares two strings
 *@s1: character variable passed the function
 *@s2: character variable to be compared to the function
 *Return: the difference value
 */
int _strcmp(char *s1, char *s2)
{
int x;
x = 0;
while (s1[x] != '\0' && s2[x] != '\0')
{
if (s1[x] != s2[x])
{
return (s1[x] - s2[x]);
}
x++;
}
return (0);
}
