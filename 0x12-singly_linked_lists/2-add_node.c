#include "lists.h"
/**
 *add_node - add a node at the beggining of the list*
 *@head: head of the linked list
 *@str: string stored in the list
 *Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)

{
	size_t i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);

	ptr->len = i;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
