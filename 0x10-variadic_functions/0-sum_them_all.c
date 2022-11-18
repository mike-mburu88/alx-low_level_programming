#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of parameters
 *@n: fixed argument
 *Return: value of the added parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
int sum = 0;
va_list ptr;
if (n == 0)
return (0);
va_start(ptr, n);
for (x = 0; x < n; x++)
sum += va_arg(ptr, int);
va_end(ptr);
return (sum);
}
