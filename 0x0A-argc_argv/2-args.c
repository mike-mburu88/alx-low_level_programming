#include <stdio.h>
#include "main.h"

/**
 *main - prints all arguments it receives
 *@argc: argument for the total count
 *@argv: array argument for the list of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int xcount = 0;
if (argc > 0)
{
while (xcount < argc)
{
printf("%s\n", argv[xcount]);
xcount++;
}
}
return (0);
}
