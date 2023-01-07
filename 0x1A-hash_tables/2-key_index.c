#include "hash_tables.h"
/**
 * key_index - this returns an index in the array relating to the arr size
 * @key: key in a key value pair
 * @size: the array size
 * Return: returns the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int arr_Ind;

	arr_Ind = hash_djb2(key);
	arr_Ind  = arr_Ind % size;
	return (arr_Ind);
}
