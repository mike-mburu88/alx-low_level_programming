
#include "main.h"
int find_strlen(char *s);
int check_palindrome(char *s, int x, int index);
int is_palindrome(char *s);
/**
*find_strlen - function that finds the string length
*is_palindrome - function that returns 1 for a palindrome
*@s: string value to be checked
*Return: 1 if check is passed
*/
int find_strlen(char *s)
{
int x = 0;
if (*(s + x))
{
x++;
x += find_strlen(s + x);
}
return (x);
}
