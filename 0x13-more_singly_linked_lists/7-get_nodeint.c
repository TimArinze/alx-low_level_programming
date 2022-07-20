#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns
 * the nth node of a listint_t linked list.
 * @head: head
 * @index: the indexing
 * Return: the nth node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
