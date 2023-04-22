#include "hash_tables.h"

/**
 * key_index - function that gives index of a key
 * using the djb2 algorithm
 *
 * @key: a key of the hash table
 * @size: size of the array of the hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
