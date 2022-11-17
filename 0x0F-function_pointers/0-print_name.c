#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - function that prints a name
 *@name: the string variable to be printed
 *@f: the pointer to the function
 *Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
