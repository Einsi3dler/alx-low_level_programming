#include "lists.h"
/**
 * add_dnodeint - this adds nodes at the begining
 * @head: this contains a pointer to the head node
 * @n: contains the int to be put into the node
 * Return: returns the head node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node, *temp;

	temp = *head;
	new_Node = malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
	{
		return (NULL);
	}
	new_Node->next = *head;
	new_Node->n = n;
	new_Node->prev = NULL;
	temp->prev = new_Node;
	*head = new_Node;
	return (*head);
}
