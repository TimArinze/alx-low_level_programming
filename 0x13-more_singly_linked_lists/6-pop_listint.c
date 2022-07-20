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
	int data;

	if (head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
