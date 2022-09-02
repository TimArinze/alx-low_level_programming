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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		new->prev = NULL;
		return (new);
	}
	temp = *h;
	while (idx != 1)
	{
		temp = temp->next;
		--idx;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
