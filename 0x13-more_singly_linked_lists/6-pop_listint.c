#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - A function that deletes the head node
 * of a listint_t linked list
 * @head: head
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = *head;
	free(*head);
	return (temp);
}
