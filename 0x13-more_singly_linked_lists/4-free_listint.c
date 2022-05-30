#include "lists.h"
/**
 * free_listint - frees the list totally
 * @head: the address of the libary
 * Return: return nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
