#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end of a list
 * @head: this contains the head that points to the address of the stack
 * @n: this contains the value to be stored
 * Return: This returns the address of the last element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *guide;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;
	end_node->prev = NULL;

	guide = *head;

	if (head == NULL)
	{
		*head  = end_node;
	}
	else
	{
		while (guide->next != NULL)
		{
			guide = guide->next;
		}
		guide->next = end_node;
		end_node->prev = guide;
		guide = guide->next;
	}
	return (guide);
}
