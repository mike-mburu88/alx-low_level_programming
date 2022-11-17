#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - program that allows use of mathematical operations
 *@argc: argument count
 *@argv: array list of all arguments
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
int arg1, arg2;
int result;
char array;
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
printf("Error\n");
exit(99);
}
array = *argv[2];
if ((array == '/' || array == '%') && arg2 == 0)
{
printf("Error\n");
exit(100);
}
result = func(arg1, arg2);
printf("%d\n", result);
return (0);
}
