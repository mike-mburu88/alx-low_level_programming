#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: the first integer
 *@b: the second variable
 *Return: 0
 */
void swap_int(int *a, int *b)
{
int r;
r = *a;
*a = *b;
*b = r;
}
