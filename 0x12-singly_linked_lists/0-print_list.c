#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - A function that prints all the elements of a list_t
 * @h: pointer to the list_t
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h[i]; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
