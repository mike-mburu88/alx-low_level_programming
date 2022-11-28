#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *add_node - adds a new node at the beginning
 *@head: the head node of a linked list
 *@str: string variable in the function
 *Return: address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
char *address;
int len;
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
address = strdup(str);
if (address == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
len++;
new->str = address;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
