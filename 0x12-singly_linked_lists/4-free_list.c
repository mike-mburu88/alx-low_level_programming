#include "lists.h"
#include <stdlib.h>
/**
 *free_list - function that frees a list
 *@head: an argument for the first node
 *Return: Always 0
 */
void free_list(list_t *head)
{
list_t *set;
while ((set = head) != NULL)
{
head = head->next;
free(set->str);
free(set);
}
}
