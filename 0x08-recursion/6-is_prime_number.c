#include "main.h"
int is_divisible(int num, int div);
int is_prime_number(int n);
/**
 *is_prime_number - function checks for prime numbers
 *is_divisible - checks the divisibility of a num value
 *@num: the value to be passed for check
 *@n: integer value
 *@div: the divisor value
 *Return: a integer value 0 or 1
 */
int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);
if (div == num / 2)
return (1);
return (is_divisible(num, div + 1));
}
