#include "hash_tables.h"
/**
 * hash_table_create - this creates a hash table
 * @size: size of the array
 * Return: returns the pointer to the hashmap
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_Table;
	unsigned long int i;

	new_Table = malloc(sizeof(hash_table_t));
	new_Table->size = size;
	new_Table->array = malloc(size * sizeof(hash_node_t *));
	for (i = 0; i < size; i++)
	{
		new_Table->array[i] = NULL;
	}
	return (new_Table);
}
