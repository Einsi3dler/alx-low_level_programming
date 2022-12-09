#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at a specific index
 * @head - pointer to a pointer containing headadress
 * @index - index of node to be deleted
 * Return: This returns 1 if it succeeds and returns -1 for fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *ptr;
	unsigned int count, ind;
	ind = 0;
	count = 0;
	temp = *head;
	ptr = *head;
	while(temp != NULL)
	{
		temp = temp->next;
		count ++;
	}
	if (temp == ptr)
	{
		return(1);
	}
	if(count == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	if (index == 0)
	{
		*head = ptr->next;
		ptr->next->prev = NULL;
		free(ptr);
		return (1);
	}
	else
	{
		while(ind != index)
		{
			ptr = ptr->next;
			ind ++;
		}
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(ptr);
		return (1);
	}
}
