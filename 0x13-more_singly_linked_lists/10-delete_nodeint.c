#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes the node at index
 *@head: the head node argument
 *@index: the node number
 *Return: ! if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x;
listint_t *previous;
listint_t *next;
previous = *head;
if (index != 0)
{
for (x = 0; x < index - 1 && previous != NULL; x++)
{
previous = previous->next;
}
}
if (previous == NULL || (previous->next == NULL && index != 0))
{
return (-1);
}
next = previous->next;
if (index != 0)
{
previous->next = next->next;
free(next);
}
else
{
free(previous);
*head = next;
}
return (1);
}
