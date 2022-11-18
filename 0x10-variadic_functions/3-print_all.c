#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - function that prints anything
 *@format: array list of all arguments
 *Return: no return value
 */

void print_all(const char * const format, ...)
{
unsigned int x = 0, y, z = 0;
char *string;
const char t_arg[] = "cifs";
va_list printer;
va_start(printer, format);
while (format && format[x])
{
y = 0;
while (t_arg[y])
{
if (format[x] == t_arg[y] && z)
{
printf(", ");
break;
}
y++;
}
 switch (format[x])
{
case 'c':
printf("%c", va_arg(printer, int)), z = 1;
break;
case 'i':
printf("%d", va_arg(printer, int)), z = 1;
break;
case 'f':
printf("%f", va_arg(printer, double)), z = 1;
break;
case 's':
string = va_arg(printer, char*), z = 1;
if (!string)
{
printf("nil");
break;
}
printf("%s", string);
}x++;
}
printf("\n"), va_end(printer);
}
