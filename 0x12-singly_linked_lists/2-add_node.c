#include <stdio.h>
#include "lists.h"
/**
 * add_node - A function that adds a new
 * node at the beginning of a list_t list
 * @head: the head
 * @str: string
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	for (len = 0; str[len]; len++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
