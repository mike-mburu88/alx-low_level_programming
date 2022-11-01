#include "main.h"

/**
 **_strstr - function that locates a substring
 *@haystack: main string variable
 *@needle: substring to be searched
 *Return: subtring address
 */
char *_strstr(char *haystack, char *needle)
{
int x;
if (*needle == 0)
return (haystack);
while (*haystack)
{
x = 0;
if (haystack[x] == needle[x])
{
do {
if (needle[y + 1] == '\0')
return (haystack);
y++;
}
while (haystack[y] == needle[y])
}
haystack++;
}
return ('\0')
}
