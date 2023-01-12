#include "lists.h"
#include <stdio.h>
/**
 *dlistint_len - returns the no. of elements
 *@h: the pointed to a doubly-linked list
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t y;
for (y = 0; h != NULL; y++)
h = h->next;
return (y);
}
