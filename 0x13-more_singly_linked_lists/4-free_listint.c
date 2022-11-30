#include "lists.h"
/**
 *free_listint - a function that frees a list
 *@head: the head node
 *Return: 0
 */
void free_listint(listint_t *head)
{
listint_t *xnode;
while ((xnode = head) != NULL)
{
head = head->next;
free(xnode);
}
}
