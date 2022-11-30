#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - adds a new node to the beginning of a list
 *@head: the head node
 *@n: the node number
 *Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
