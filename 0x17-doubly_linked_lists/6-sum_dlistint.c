#include "lists.h"
/**
 * sum_dlistint- This sums the int data in this stacked list
 * @head: contains the address of the linked list
 * Return: This returns the total summation
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	else
	{
		while ((head->next)!=NULL)
		{
			sum = (head->n) + sum; 
			head = head->next;
		}
		sum = (head->n) + sum;

		return (sum);
	}
}
