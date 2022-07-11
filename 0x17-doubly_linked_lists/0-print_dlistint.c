#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the singly list head
 * Return: number of elements.
 */

size_t print_dlistint(const dlistint_t *h)

{
	size_t count = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
