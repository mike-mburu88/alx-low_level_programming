#include <stdio.h>
#include "main.h"
/**
 *print_array - function that prints n elements of an array of integers
 *@n: argument variable
 *@a: second argument variable
 *Return: value
 */

void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x != n - 1)
printf(", ");
}
printf("\n");
}
