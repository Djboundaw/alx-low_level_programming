#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the hash table
 * Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int long i;
	hash_table_t *my_ht;

	my_ht = malloc(sizeof(hash_table_t));
	if (my_ht == NULL)
		return (NULL);

	my_ht->size = size;
	my_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (my_ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		my_ht->array[i] = NULL;

	return (my_ht);
}
