#include "lists.h"
/**
 * print_dlistint - Function that prints all the element of the list
 * @h: the head
 *
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}





