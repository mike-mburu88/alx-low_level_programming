#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_dog - a function that frees dogs
 *@d: variable for the dog struct
 *Return: 0
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->owner);
free(d->name);
free(d);
}
