#include <stdio.h>
#include <main.h>

/**
 *main - functions to find the highest prime factor
 *Return: should have a void return
 */
int main(void)
{
unsigned long int i, n = 612852475143;
for (i = 3; i < 782849; i = i + 2)
{
while ((n % i == 0) && (n != i))
n = n / i;
}
printf("%lu\n", n);
return (0);
}
