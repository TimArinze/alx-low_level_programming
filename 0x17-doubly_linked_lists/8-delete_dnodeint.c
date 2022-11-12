#include "lists.h"
/**
 * delete_dnodeint_at_index - A function that deletes the node at index
 * @head: head
 * @index: index
 * Return: 1 on success and -1 on failure;
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head, *temp;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);

	saved_head = *head;
	for (i = 0; *head != NULL && i < index; i++)
		*head = (*head)->next;

	if (index != i)
	{
		*head = saved_head;
		return (-1);
	}

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		if (temp != NULL)
		{
			temp->prev = NULL;
		}
	}
	else
	{
		(*head)->next = (*head)->next->next;
		free(*head);
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		*head = saved_head;
	}
	return (1);
}
