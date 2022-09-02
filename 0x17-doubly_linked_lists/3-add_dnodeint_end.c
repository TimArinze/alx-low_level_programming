#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: head
 * @n: data
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = temp;
	if (temp)
		temp->next = new;
	else
		*head = new;
	return (new);
}
