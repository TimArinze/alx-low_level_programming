#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserta a new node at
 * a given position
 * @h: head
 * @idx: index
 * @n: data
 * Return: new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new;


	curr = *h;
	while (idx != 0)
	{
		curr = curr->next;
		idx--;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
	}
	else if (curr->prev != NULL)
	{
		new->next = curr;
		new->prev = curr->prev;
		curr->prev->next = new;
	}
	else if (curr->prev == NULL && idx == 0)
	{
		new->next = curr;
		new->prev = NULL;
		curr = new;
	}
	else if (curr->next == NULL)
	{
		new->next = NULL;
		new->prev = curr->prev;
		curr->prev->next = new;
	}
	else
		return (NULL);
	return (curr);
}
