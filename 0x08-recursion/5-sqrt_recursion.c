#include "main.h"

int find_sqrt(int num, int root_value);
int _sqrt_recursion(int n);

/**
 *find_sqrt - finds the square root of a number
 *@num: integer value passed for root operation
 *@root: the root value of the operation
 *Return: natural square root value
 */
int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);
if (root == num / 2)
return (-1);
return (find_sqrt(num, root + 1));
}
/**
 *_sqrt_recursion - function that returns the natural square root
 *@n: variable for the function argument
 *Return: square root value
 */

int _sqrt_recursion(int n)
{
int root = 0;
if (n < o)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
