#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at a specific index
 * @head - pointer to a pointer containing headadress
 * @index - index of node to be deleted
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count, ind;
	ind = 0;
	count = 1;
	temp = *head;
	temp = temp->next;

}
