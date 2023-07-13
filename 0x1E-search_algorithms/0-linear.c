#include "search_algos.h"
/**
 * linear_search - searche for a value in an array using linear search
 * @array: this contains the integer
 * @size: size of the integer
 * @value: value being searched for
 * Return: returns the index of the value in the array
 */
int linear_search(int *array, size_t size, int value)
{
        size_t index;

        if (array == NULL || size == 0)
        {
                return (-1);
        }

        for (index = 0; index < size; index++)
        {
                printf("Value checked array[%lu] = [%d]\n", index, array[index]);
                if (array[index] == value)
                {
                        return (index);
                }
        }
        return (-1);
}
