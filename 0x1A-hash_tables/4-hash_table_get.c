#include "hash_tables.h"
/*
 * hash_table_get - gets a value for the key pair
 * @ht: address of hash map
 * @key: well lol what else do you want to know
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int arr_Ind;
	char *value;

	if (ht == NULL)
	{
		return (NULL);
	}
	arr_Ind = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[arr_Ind])
	{
		return (NULL);
	}
	value = ht->array[arr_Ind]->value;
	return (value);
}
