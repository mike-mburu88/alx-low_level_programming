#include "main.h"

/**
* print_last_digit - a function that prints the last digit of a number
* @n: the integer variable
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
int Id = n % 10;
if (Id < 0)
Id *= -1;
_putchar(Id * '0');
return (0);
}
