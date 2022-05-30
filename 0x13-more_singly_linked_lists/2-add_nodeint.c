#include "lists.h"
/**
 * add_nodeint - adds node at the head
 * @n: variable in the node to be added
 * return: returns the list init
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *ptr;
	ptr = malloc (sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	temp = *head;
	*head = ptr;
	ptr->next = temp;

	return (*head);
}

