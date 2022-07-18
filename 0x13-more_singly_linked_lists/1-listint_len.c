#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * listint_len - Function that returns the number of
 * element in a linked list
 * @h: the pointer
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
