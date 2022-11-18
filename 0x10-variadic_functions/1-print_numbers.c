#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 *print_numbers - function that prints numbers
 *@n: the fixied argument passed in the function
 *@separator: string between numbers
 *Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ar;
va_start(ar, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ar, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ar);
}
