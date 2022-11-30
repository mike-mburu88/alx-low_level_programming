#include "lists.h"
/**
 *sum_listint - function that returns the sum of all the data
 *@head: the head node
 *Return: Always 0
 */
int sum_listint(listint_t *head)
{
int add;
while (head != NULL)
{
add += head->n;
head = head->next;
}
return (add);
}
