#include "lists.h"

/**
*print_listint - to print all the elements in a list using putchar
*@h: the head of the list
*Return: Returns number of elements in list
*/

size_t print_listint(const listint_t *h)
{
	size_t count_e;
	
	count_e = 0;
	while (h != NULL)
	{
		if (h->n == NULL)
		{
			return (NULL);
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		count_e++;
	}
	return (count_e);
}
