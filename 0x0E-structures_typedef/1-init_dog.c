#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *init_dog - function that initialize a variable of type
 *@d: variable for dog
 *@name: variable for dog name
 *@age: variable for dog age
 *@owner: variable for the dog owner
 *Return: Struct variables
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if  (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
