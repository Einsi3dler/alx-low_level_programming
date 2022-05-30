#include "lists.h"

/**
 *add_nodeint_end - this adds node at the end of a single linked list
 *@head:  contains the address of the head
 *@n: contains the value to be inputed
 *Return: Returns the address of the head
 */
 
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	temp = *head;

	ptr->n = n;
	ptr->next = NULL;

	if (temp == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (*head)
}
