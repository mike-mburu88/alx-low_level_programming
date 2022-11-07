#include <stdio.h>
#include "main.h"

/**
 *main - prints the number of arguments passed
 *@argc: arguments passed for the total count
 *@argv: argument for the list of variables
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);
return (0);
}
