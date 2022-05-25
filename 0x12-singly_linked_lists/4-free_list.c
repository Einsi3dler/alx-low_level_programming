#include "lists.h"
/**
 * free_list - frees the space allocated by malloc
 * @head: head of the list
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
