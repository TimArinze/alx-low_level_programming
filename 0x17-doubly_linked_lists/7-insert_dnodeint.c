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
	unsigned int i = 0, x;
	dlistint_t *temp, new;

	if (head == NULL && idx == 0)
		add_dnodeint(&h, n);
	while (head->next != NULL)
	{
		i++;
		head = head->next;
	}
	if (idx > i)
		return (NULL);

	if (head != NULL && idx == 0)
		add_dnodeint(&h, n);
	else if (head != NULL && idx == i)
		add_dnodeint_end(&h, n);
	else if (idx > 0 && idx < i)
	{
		temp = *head;
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		for (i = 0; i != idx; i++)
			temp = temp->next;
		new->n = n;
		new->next = temp->next;
		new->prev = temp;
		return (temp);
	}
}
