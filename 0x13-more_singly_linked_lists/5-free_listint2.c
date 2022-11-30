#include "lists.h"
/**
 *free_listint2 - function to frees a list
 *@head: the head node
 *Return: 0
 */
void free_listint2(listint_t **head)
{
listint_t *nodex;
listint_t *current;
if (head != NULL)
{
current = *head;
while ((nodex = current) != NULL)
{
current = current->next;
free(nodex);
}
*head = NULL;
}
}
