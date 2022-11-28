#include "lists.h"

/**
*list_len - returns the number of elements in a list
*@h: singly linked list
*Return: the total number of elements
*/
size_t list_len(const list_t *h)
{
size_t number;
number = 0;
while (h != NULL)
{
h = h->next;
number++;
}
return (number);
}
