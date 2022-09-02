#include "lists.h"
/**
 * dlistint_len - Function that returns the number of element linked
 *
 * @h: head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
