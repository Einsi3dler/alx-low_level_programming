#include "lists.h"
/**
 * add_dnodeint_end - This adds a nnode at the end of the list
 * @*head - pointer to the pointer of the head node
 * @n - integer to be added
 * Return: address of the new added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
	dlistint_t *new_Node;
	dlistint_t *temp;
	temp = *head;
	new_Node = malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
	{
		return (NULL);
	}
	if (temp == NULL)

	{
		new_Node->prev = NULL;
		new_Node->n = n;
		new_Node->next = NULL;
		*head = new_Node;
		return (new_Node);
	}
	else 
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		new_Node->prev = temp;
		new_Node->n = n;
		new_Node->next = NULL;
		temp->next = new_Node;
		return (*head);
	}
}
