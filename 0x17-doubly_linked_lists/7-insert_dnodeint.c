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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	curr = *h;
	new->n = n;
	if (*h == NULL && idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (*h == NULL && idx != 0)
		return (NULL);

	if (*h != NULL && idx == 0)
	{
		new->next = curr->next;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (idx > 1 && curr->next != NULL)
	{
		curr = curr->next;
		--idx;
	}
	if (curr->next == NULL)
	{
		new->next = NULL;
		curr->next = new;
		new->prev = curr;
	}
	else
	{
		new->next = curr->next;
		curr->next = new;
		new->prev = curr;
	}
	return (new);
}
