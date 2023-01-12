#include "lists.h"
#include <stdio.h>
/**
 *delete_dnodeint_at_index - deletes the node at index
 *@head: the head node pointer
 *@index: the index variable for a node
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int y;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
if (current->next != NULL)
{
current->next->prev = NULL;
}
free(current);
return (1);
}
for (y = 0; y < index; y++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
