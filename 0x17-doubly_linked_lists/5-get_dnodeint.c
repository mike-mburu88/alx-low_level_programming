#include "lists.h"
#include <stdio.h>
/**
 *get_dnodeint_at_index - returns the nth node of a linked list
 *@head: the node pointer for the head
 *@index: index of the node, starting from 0
 *Return: nth node, NULL if none
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x;
if (head == NULL)
return (NULL);
if (index == 0)
return (head);
for (x = 0; x < index; x++)
{
if (head->next == NULL)
return (NULL);
head = head->next;
}
return (head);
}
