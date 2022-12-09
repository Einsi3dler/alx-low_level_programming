#include "lists.h"
/**
 * insert_dnodeint_at_index - this inserts a node at a specific index
 * @h - contains the address of the head node
 * @idx - index point
 * @n - int to be inserted into the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp, *new_node;
	unsigned int index;
	index = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	ptr = *h;
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = ptr;
		new_node->prev = NULL;
		ptr->prev = new_node;
		*h = new_node;
		return new_node;
	}
	else
	{
		while(index != idx)
		{
			ptr = ptr->next;
			index ++;
		}
		new_node->n = n;
		new_node->next = ptr;
		new_node->prev = ptr->prev;
		ptr->prev->next = new_node;
		ptr->prev = new_node;
		return new_node;
	}
}
