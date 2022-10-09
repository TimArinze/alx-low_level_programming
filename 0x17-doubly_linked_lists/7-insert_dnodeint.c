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
	dlistint_t *new, *curr;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (*h);
	}
	curr = *h;
	while (idx != 1)
	{
		curr = curr->next;
		if (curr == NULL)
		{
			free(new);
			return (NULL);
		}
		--idx;
	}
	new->next = curr->next;
	new->prev = curr;
	curr->next = new;
	return (new);
}
