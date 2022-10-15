#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - source code for random number generation program
 *Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("The number %d is equals to 0\n", n);
}
else
{
printf("The number %d is negative\n", n);
}
return (0);
}
