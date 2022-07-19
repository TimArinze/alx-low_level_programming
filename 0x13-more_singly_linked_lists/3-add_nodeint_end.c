#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * add_nodeint_end - Function that adds new node at
 * the end of a list
 * @head: the head
 * @n: the data
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr;

	ptr = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (temp)
		ptr->next = temp;
	else
		*head = temp;
	return(temp);
}
