#include "lists.h"

/**
 *reverse_listint - function that reverses a linked list
 *@head: the head node
 *Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *x;
listint_t *y;
x = NULL;
y = NULL;
while (*head != NULL)
{
y = (*head)->next;
(*head)->next = x;
x = *head;
*head = y;
}
*head = x;
return (*head);
}
