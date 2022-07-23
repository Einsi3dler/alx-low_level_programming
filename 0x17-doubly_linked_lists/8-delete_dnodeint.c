#include "lists.h"
/**
 * delete_dnodeint_at_indec: this deletes the node at the given index
 * @head: this contains the address for the given stack
 * @index: this contains the index given
 * Return: this returns an integer
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *holder;

	unsigned int i;

	holder = head;
	i = 0;
	while (i != index)
	{
		if (holder == NULL)
		{
			return (-1);
		}
		holder = holder->next;
		i++;
	}
	holder->prev->next = holder->next;
	holder->next->prev = holder->prev;
	free(holder);
	return (1);
}
