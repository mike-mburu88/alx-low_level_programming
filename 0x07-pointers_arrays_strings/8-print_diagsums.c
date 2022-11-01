#include "main.h"
#include <stdio.h>

/**
 *print_diagsums -  function that prints the sum of the two diagonals
 *@a: variable for first diagonal
 *@size: size of the array
 *Return: value
 */
void print_diagsums(int *a, int size)
{
int x, first_sum = 0, second_sum = 0;
for (x = 0; x < size; x++)
{
first_sum += a[x];
a += size;
}
a -= size;
for (x = 0; x < size; x++)
{
second_sum += a[x];
}
printf("%d, %d\n", first_sum, second_sum);
}
