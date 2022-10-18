#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times
*/
void print_alphabet_x10(void)
{
int count;
char lt;
for (count  = 0; count <= 9; count++)
{
for (lt = a; lt < z; lt++)
_putchar(lt);
_putchar('\n');
}
}
