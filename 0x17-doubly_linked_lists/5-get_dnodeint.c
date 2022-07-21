#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node data at the given index
 * @head: This contiains the address of the pointer
 * @index: This contains the node at the index to be acessed
 * Return: This returns the value at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *holder;

	unsigned int i;

	holder = head;
	i = 0;
	while (i != index)
	{
		if (holder == NULL)
		{
			return (NULL);
		}
		holder = holder->next;
		i++;
	}
	return (holder);
}
