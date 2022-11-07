#include <stdio.h>
#include "main.h"
/**
 *main - program that prints its name
 *@argc: argument containing the number of arguments
 *@argv: argument containing the list of arguments
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
