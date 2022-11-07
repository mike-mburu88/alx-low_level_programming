#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 *check_num - check of there are digits in a string
 *@str: an array variable
 *Return: Always 0
 */
int check_num(char *str)
{
unsigned int xcount;
xcount = 0;
while (xcount < strlen(str))
{
if (!isdigit(str[xcount]))
{
return (0);
}
xcount++;
}
return (1);
}
/**
 *main - prints the results of added positive numbers
 *@argc: argument count
 *@argv: the argument list in string
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
int xcount;
int str_change;
int add = 0;
xcount = 1;
while (xcount < argc)
{
if (check_num(argv[xcount]))
{
str_change = atoi(argv[xcount]);
add += str_change;
}
else
{
printf("Error\n");
return (1);
}
xcount++;
}
printf("%d\n", add);
return (0);
}

