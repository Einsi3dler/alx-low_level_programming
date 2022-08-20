#include "hash_tables.h"

/**
 * hash_table_create - This creates a hash table
 * @size: This is the size of the hash table to be creates
 *
 * Return: This returns the pointer to the array create
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *addressPin;
	unsigned long int i;

	addressPin = malloc(sizeof(hash_table_t));

	if (addressPin == NULL)
	{
		return (NULL);
	}

	addressPin->size = size;
	addressPin->array = malloc(sizeof(hash_node_t *) * size);
	if (addressPin->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		addressPin->array[i] = NULL;
	}

	return (addressPin);
}
