#include "main.h"

/**
 *_pow_recursion - function that returns recursive power
 *@x: integer base value
 *@y: integer power value
 *Return: int result of power value
 */
int _pow_recursion(int x, int y)
{
int value = x;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
value *= _pow_recursion(x, y - 1);
return (value);
}
