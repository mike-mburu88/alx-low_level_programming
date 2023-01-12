#include "lists.h"
#include <stdio.h>
/**
 *sum_dlistint - sum of all the data (n) of a linked list
 *@head: the head node pointer
 *@n: the data to be added to the variable
 *Return: ) if empty
 */
int sum_dlistint(dlistint_t *head)
{
int result = 0;
while (head != NULL)
{
result += head->n;
head = head->next;
}
return (result);
}
