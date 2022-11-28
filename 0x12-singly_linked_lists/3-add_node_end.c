#include "lists.h"
#include "string.h"
/**
 *add_node_end - adds a new node at the end of a list_t
 *@head: the argument for the first node
 *@string: the data variable stored in the string
 *Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
size_t number;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
for (number = 0; str[number]; number++)
;
new->len = number;
new->next = NULL;
temp = *head;
if (temp == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}
return (*head);
}
