#include "lists.h"
/**
* print_listint_safe - function that prints a linked list with a loop safely.
* @head: pointer to the 1st node of the linked list
* Return: new_nodeode
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp_node = NULL;
const listint_t *l_n = NULL;
size_t new_node;
size_t counter = 0;


temp_node = head;
while (temp_node)
{
printf("[%p] %d\n", (void *)temp_node, temp_node->n);
counter++;
temp_node = temp_node->next;
l_n = head;
new_node = 0;
while (new_node < counter)
{
if (temp_node == l_n)
{
printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
return (counter);
}
l_n = l_n->next;
new_node++;
}
if (!head)
exit(98);
}
return (counter);
}