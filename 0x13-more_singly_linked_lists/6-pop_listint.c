#include "lists.h"
/**
 *pop_listint - function that deletes the head node of a list
 *@head: the head node
 *Return: the head node data
 */
int pop_listint(listint_t **head)
{
int nodex;
listint_t *h;
listint_t *current;
if (*head == NULL)
return (0);
current = *head;
nodex = current->n;
h = current->next;
free(current);
*head = h;
return (nodex);
}
