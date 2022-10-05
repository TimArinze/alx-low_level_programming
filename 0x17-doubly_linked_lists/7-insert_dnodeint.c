#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insert new node at position
 * @h: head
 * @idx: index
 * @n: data
 * Return: new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new;

	if (h == NULL && *h == NULL)
		return (0);
	curr = *h;
	while (idx != 1)
	{
		curr = curr->next;
		idx--;
		if (curr == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (curr->next == NULL)
	{
		new->next = NULL;
		new->prev = curr;
		curr->next = new;
	}
	else if (curr->prev == NULL)
	{
		new->prev = NULL;
		new->next = curr->next;
		curr = new;
	}
	else
	{
		new->next = curr->next;
		new->prev = curr->next->prev;
		curr->next = new;
		curr->next->prev = new;
	}
	return (curr);
}
