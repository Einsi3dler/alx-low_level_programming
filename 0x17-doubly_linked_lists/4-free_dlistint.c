#include "lists.h"
/**
 * free_dlistint - frees the linked list from memory
 * @head: This contains the adress of the head
 * Return: This function returns zero
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		free(holder);
	}
}
