#include "lists.h"
/**
 * print_dlistint - This counts and prints the result of a linked list
 * @h: the pointer to the head node
 * Return: This returns the the number of nodes
 */
 size_t print_dlistint(const dlistint_t *h) {
	 const dlistint_t *temp;
	 size_t node_Num;

	 node_Num = 0;
	 temp = h;
	 while( temp != NULL)
	 {
		 printf("%d\n",temp->n);
		 temp = temp->next;
		 node_Num ++;
	 }
	 return (node_Num);
 }
