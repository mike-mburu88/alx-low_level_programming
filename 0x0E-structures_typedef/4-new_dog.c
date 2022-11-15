#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strlen - finds the string length
 *@str: the string variable
 *Return: the string length
 */
int _strlen(char *str)
{
int l = 0;
while (*str++)
l++;
return (l);
}
/**
 *_strcopy - copies a string
 *@dest: the destination varable of the string
 *@src: the origin varable of the string
 *Return: the pointer to the destination
 */
char *_strcopy(char *dest, char *src)
{
int x = 0;
for (x = 0; src[x]; x++)
dest[x] = src[x];
dest[x] = '\0';
return (dest);
}
/**
 **new_dog - function that creates a new dog
 *@name: function variable for name
 *@age: function variable for age
 *@owner: function variable for owner
 *Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dogy;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
dogy = malloc(sizeof(dog_t));
if (dogy == NULL)
return (NULL);
dogy->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dogy->name == NULL)
{
free(dogy);
return (NULL);
}
dogy->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (dogy->owner == NULL)
{
free(dogy->name);
free(dogy);
return (NULL);
}
dogy->name = _strcopy(dogy->name, name);
dogy->age = age;
dogy->owner = _strcopy(dogy->owner, owner);
return (dogy);
}
