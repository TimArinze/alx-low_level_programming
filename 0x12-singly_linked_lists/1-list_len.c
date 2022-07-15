#include <stdio.h>
#include "lists.h"
/**
 * list_len - A function that returns
 * the number of the elements in a linked list_t
 * @h: pointer
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
