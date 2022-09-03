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
	dlistint_t *temp, *new;

	if (h == NULL)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
		temp = new;
		return (new);
	}
	while (idx != 1)
	{
		temp = temp->next;
		--idx;
		if (temp == NULL)
			return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
