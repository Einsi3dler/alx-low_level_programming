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
	hash_node_t *item;
	hash_node_t *curr_Item;

	/*Item definition*/
	arr_Ind = key_index((const unsigned char *)key, ht->size);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		return (0);
	}
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	item->next = NULL;

	strcpy(item->key, key);
	strcpy(item->value, value);

	/*code fulfuilment*/

	curr_Item = ht->array[arr_Ind];

	if (curr_Item == NULL)
	{
		ht->array[arr_Ind] = item;
		return (1);
	}
	else
	{
		while (curr_Item->next != NULL)
		{
			curr_Item = curr_Item->next;
		}
		curr_Item->next = item;
		return (1);
	}
}
