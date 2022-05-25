#include "lists.h"

/**
 * add_node_end - adds nodes at the end of the linked list.
 * @head: contains the head of the linked list
 * @str: contains the string in the node
 * Return: returns the the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_T *ptr, *temp;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	temp = *head;
	ptr->len = i;
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
	return (*head);
}
