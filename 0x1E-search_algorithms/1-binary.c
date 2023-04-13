#include "search_algos.h"
/**
 * print_array - this prints an array
 * @a: the array to print
 * @n: array's length
 */

void print_array(int *a, int l, int h)
{
	int i;

	for (i = l; i < h; i++)
	{
		printf("%d", a[i]);
		if (i < h - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - array search using a binary method
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched for an array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t mid;
	size_t index;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size;

	while(low != high)
	{
		mid = ((high+1)-low)/2;
		mid = mid - 1;
		index = low + mid;
		printf("Searching in array: ")
		print_array(array, low, high);
		if (array[index] == value)
		{
			return(index);
		}
		else
		{
			if (array[index] > value)
			{
				high = index;
			}
			else if (array[index] < value)
			{
				low = index + 1;
			}
		}
	}
	return (-1);
}
