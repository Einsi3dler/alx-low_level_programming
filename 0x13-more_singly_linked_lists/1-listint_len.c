#include "lists.h"

/**
 *listint_len - Returns the number of lists
 *@h: head of single list
 *Return: Return total list of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count_e;

	count_e = 0;

	while (h != NULL)
	{
		h = h->next;
		count_e++;
	}
	return (count_e);
}
