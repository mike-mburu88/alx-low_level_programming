#include 'main.h'

/**
*_islower - A function that checks for the lowercase letter
*@c: the character
*Return: 1 if letter = lowercase, 0 if not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
