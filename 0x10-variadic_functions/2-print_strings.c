#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 *print_strings - function that prints strings
 *@separator: string to be printed between strings
 *@n: the argument count passed into the function
 *Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
char *string;
unsigned int i;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
string = va_arg(arg, char *);
if (string)
printf("%s", string);
else
printf("(nil)");
if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(arg);
}
