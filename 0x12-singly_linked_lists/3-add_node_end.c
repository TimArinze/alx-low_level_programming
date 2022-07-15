#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list
 * @head: head
 * @str: string
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp1;
	unsigned int len;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	for (temp2 = *head; temp2->next;)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
