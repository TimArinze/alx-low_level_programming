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

	if (h == NULL)
		return (0);
	curr = *h;
	while (idx != 0)
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
	new->next = curr;
	new->prev = curr->prev;
	if (curr->prev != NULL)
		curr->prev->next = new;
	return (curr);
}
