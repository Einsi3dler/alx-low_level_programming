#include "lists.h"
/**
 * get_nodeint_at_index - this gets a node at a certain index
 * @head - this contains the address of the node
 * @index - the index lol
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ind, count;
	dlistint_t *temp, *node;
	temp = head;
	node = head;
	ind = 0;
	count = 0;
	while(temp != NULL)
	{
		temp = temp->next;
		count ++;
	}
	if (index > (count - 1))
	{
		return NULL;
	}
	else
	{
		while(ind != index)
		{
			node = node->next;
			ind++;
		}
		return node;
	}
}
