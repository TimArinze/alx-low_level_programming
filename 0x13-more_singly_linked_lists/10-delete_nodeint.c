#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - As the name
 * @head: head
 * @index: index of node to be deleted
 * Return: 1 for successful and -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	/* current: is the current pointer we want to delete, prev the previous one*/

	if (head == NULL || (*head) == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if ((*head)->next)
			*head = (*head)->next;
		else
			(*head) = NULL;
		free(current);
		return (1);
	}
	while (index != 1)
	{
		if (current->next == NULL)
			return (-1);
		current = current-next;
		--index;
	}
	temp = current->next;
	if (current->next->next)
		current->next = current->next->next;
	else
		current->next = NULL;
	free(temp);
	return (1);
}
