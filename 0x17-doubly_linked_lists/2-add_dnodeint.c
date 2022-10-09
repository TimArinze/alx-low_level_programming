#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at beginning
 * @head: head/address
 * @n: data
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	curr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = curr;
	new->prev = NULL;
	if (curr != NULL)
		curr->prev = new;
	*head = new;
	return (*head);
}
