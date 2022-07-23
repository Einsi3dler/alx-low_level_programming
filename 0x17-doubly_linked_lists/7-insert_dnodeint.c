#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts node at a given index point
 * @idx: this contains the index it will be inputed at 
 * @n: this contains the data to be inputed in the node
 * @Return: this returns the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *holder;
	dlistint_t *new_node;
	unsigned int i;

	holder = *h;
	new_node = malloc(sizeof(dlistint_t));
	i = 0;
	while (i != idx)
	{
		if (holder == NULL)
		{
			return (NULL);
		}
		holder = holder->next;
		i++;
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/***node switching**/
	new_node->next = holder;
	new_node->prev = holder->prev;
	holder->prev->next = new_node;
	holder->prev = new_node;

	return (new_node);
}
