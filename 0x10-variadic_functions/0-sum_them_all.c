#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of parameters
 *@n: fixed argument
 *Return: value of the added parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list printer;  
unsigned int x;
int sum = 0;
if (n == 0)
{
return (0);
}
va_start(printer, n);
for (x = 0; x < n; x++)
{
sum += va_arg(printer, int);
va_end(printer);
}
return (sum);
}
