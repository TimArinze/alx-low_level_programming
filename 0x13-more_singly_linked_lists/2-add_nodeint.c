#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * add_nodeint - A function that adds a new node at the
 * beginning of a list
 * @head: the head
 * @n: the data
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
