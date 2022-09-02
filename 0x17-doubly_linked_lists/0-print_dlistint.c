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
	size_t n;

	while (curr != NULL)
	{
		curr = curr->next;
		n++;
		printf("%d\n", curr->data);
	}
	return (n);
}
