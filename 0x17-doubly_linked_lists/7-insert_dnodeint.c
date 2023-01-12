#include "lists.h"
#include <stdio.h>
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: the pointer variable for a node
 *@idx: the index variable for a node
 *@n: the node variable
 *Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *next, *current;
unsigned int x;
if (h == NULL)
return (NULL);
if (idx != 0)
{
current = *h;
for (x = 0; x < idx - 1 && current != NULL; x++)
current = current->next;
if (current == NULL)
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
next = *h;
*h = new;
new->prev = NULL;
}
else
{
new->prev = current;
next = current->next;
current->next = new;
}
new->next = next;
if (new->next != NULL)
new->next->prev = new;
return (new);
}
