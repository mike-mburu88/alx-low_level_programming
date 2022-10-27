#include "main.h"

/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: first function variable to be used to reverse
 *@n: number of elements in an array
 *Return: value
 */
void reverse_array(int *a, int n)
{
int x;
int y;
x = 0;
for (x = 0; x < n; x++)
{
n--;
y = a[x];
a[x] = a[n];
a[n] = y;
}
}
