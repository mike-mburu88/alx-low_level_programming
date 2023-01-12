#include "lists.h"
#include <stdio.h>
/**
 *add_dnodeint -  adds a new node at the beginning of a list
 *@heaad: the pointer to the head node
 *@n: the variable for the number of nodes
 *Return: the address of the new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
if (head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
*head = new;
if (new->next != NULL)
(new->next)->prev = new;
return (new);
}
