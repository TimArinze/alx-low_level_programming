#include "lists.h"
/**
 * print_dlistint - Function that prints all the element of the list
 * @h: the head
 *
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t curr = h;
	size_t i;

	while (curr != NULL)
	{
		curr = curr->next;
		i++;
		printf("%d\n", curr->n);
	}
	return (i);
}

