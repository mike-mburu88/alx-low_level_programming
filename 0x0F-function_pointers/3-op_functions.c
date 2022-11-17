
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - returns the sum of the operation
 *@a: the first integer variable
 *@b: the second integer variable
 *Return: added value
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 *op_sub - returns the subtracted value
 *@a: 1st integer variable
 *@b: second integer
 *Return: subtracted value
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - returns the product value
 *@a: 1st integer
 *@b: 2nd integer
 *Return: the product value
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div - returns the product value
 *@a: 1st integer
 *@b: 2nd integer
 *Return: the product
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 *op_mod - the modulus function
 *@a: 1st integer
 *@b: 2nd integer
 *Return: the modulus
 */
int op_mod(int a, int b)
{
return (a % b);
}
