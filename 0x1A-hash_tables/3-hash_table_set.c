#include "hash_tables.h"
/**
 * hash_table_set - this inserts an element into the hash table
 * @ht: this is a pointer to the address of the hash table
 * @key: this is the key in the key value pair
 * @value: this is the value in the value pair
 * Return: this returns 1 if it works and 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int arr_Ind;
	arr_Ind = key_index(key);
}
