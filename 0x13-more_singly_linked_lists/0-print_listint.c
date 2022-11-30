#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint -  prints all the list elements
 *@h: the head of a list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t number = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
number++;
}
return (number);
}
