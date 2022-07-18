#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - function that prints the elements of linked list
 * @h: the list pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
	}
	return (i);
}
