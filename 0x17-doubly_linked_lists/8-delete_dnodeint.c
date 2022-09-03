#include "lists.h"
/**
 * delete_dnodeint_at_index - A function that deletes the node at index
 * @head: head
 * @index: index
 * Return: 1 on success and -1 on failure;
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (-1);
	current = *head;
	if (current == NULL)
		return (-1);
	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (-1);
	}
	if (current->prev != NULL)
		current->prev->next = current->next;
	else
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
	}
	return (1);
}
