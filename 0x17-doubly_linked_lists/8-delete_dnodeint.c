#include "lists.h"
/**
 * delete_dnodeint_at_index - A function that deletes the node at index
 * @head: head
 * @index: index
 * Return: 1 on success and -1 on failure;
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	if (head == NULL || (*head) == NULL)
		return (-1);
	curr = *head;
	for (i = 0; (*head)->next != NULL && i != index; i++)
		*head = (*head)->next;
	if (index > i)
		return (-1);
	if ((*head)->next)
	{
		*head = (*head)->next;
		(*head)->next->prev = (*head)->prev;
	}
	else
		*head = NULL;
	free(curr);
	return (1);
}
