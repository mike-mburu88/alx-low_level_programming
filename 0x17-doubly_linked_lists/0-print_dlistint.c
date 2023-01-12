#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint - a function that prints all elements
 *@h: a pointer variable for list variables
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t x;
for (x = 0; h != NULL; x++)
{
printf("%d\n", h->n);
h = h->next;
}
return (x);
}
