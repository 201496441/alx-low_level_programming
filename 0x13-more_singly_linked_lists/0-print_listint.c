#include <stdio.h>
#include "lists.h"
/**
	* print_listint - prints all the elements of a linked list
	* @h: pointer to the 1st node of the linked list
	* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes=0;
	while (h!=null)
	{
		printf("%d\n",h->n);
		nodes++;
		h=h->next;
	}
	return (nodes);
}
