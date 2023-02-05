#include "hash_tables.h"
/**
 * hash_table_print - prints the whole table
 * @ht: addresss of the hashmap
 * Returns: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int q, i ,z;

	q = ht->size;
	printf("{");
	for (i = 0; i<q; i++)
	{
		if (ht->array[i])
		{
			z++;
			if (z == 1)
			{
				printf("%s: %s", ht->array[i]->key, ht->array[i]->value);
			}
			else
			{
				if (z != 2)
					printf(",");
				printf(" %s: %s", ht->array[i]->key, ht->array[i]->value);
			}
		}
	}
	printf("}\n");
}
