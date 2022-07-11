#include "lists.h"
/**
 * dlistint_t - prints number of  elements in a list 
 * @h: the head of the list
 * Return: return the number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;
	while(ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
