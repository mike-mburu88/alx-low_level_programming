#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a list
 *@head: the head node
 *@index: the index variable for a node in the list
 *Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x;
for (x = 0; x < index && head != NULL; x++)
{
head = head->next;
}
return (head);
}
