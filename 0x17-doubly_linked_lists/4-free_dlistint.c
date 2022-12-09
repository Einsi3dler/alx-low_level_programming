#include "lists.h"
/**
 * free_dlistint - this frees the list
 * @head: contains the address to the head node
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
