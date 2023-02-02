#include "hash_tables.h"
/**
 * key_index - gives the ksy index
 * @key: variable that stores the key of a hash table
 * @size: size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
