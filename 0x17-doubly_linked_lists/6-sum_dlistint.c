#include "lists.h"
/**
 * sum_dlistint - sums all the ints in the node
 * @head: This contains the address of the head node
 * Return: returns an int
 */
int sum_dlistint(dlistint_t *head)
{
	int res;
	dlistint_t *temp;

	temp = head;
	res = 0;
	while (temp != NULL)
	{
		res += temp->n;
		temp = temp->next;
	}
	return (res);
}
