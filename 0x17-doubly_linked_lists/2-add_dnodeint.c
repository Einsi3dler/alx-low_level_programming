#include "lists.h"
/**
 * add_dnodeint - This adds a new node at the begining of the stack
 * @head: contains the address of the stack
 * @n: contains the value to be added at the node
 * Return: Returns the address of the head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	*head = new_node;

	return (*head);
}
