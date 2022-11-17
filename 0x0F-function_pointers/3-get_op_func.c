#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *get_op_func -  function that selects the correct function to perform
 *@s: array variable
 *Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
int i;
i = 0;
op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div},
{"%", op_mod}, {NULL, NULL}
};
while (ops[i].op)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}
