#include "lists.h"
/**
 * dlistint_len - This programs counts the node
 * @h: pointer to head node
 * Return: returns the number of node
 */
size_t dlistint_len(const dlistint_t *h) {
	const dlistint_t *temp;
	size_t node_Num;
	node_Num = 0;
	temp = h;

	while(temp != NULL)
	{
		temp = temp->next;
		node_Num ++;
	}
	return (node_Num);
}
