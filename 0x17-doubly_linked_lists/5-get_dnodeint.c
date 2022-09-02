#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 * @head: head
 * @index: the index
 * Return: NULL if node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (; head->next != NULL && i != index; i++)
		head = head->next;
	if (index > i)
		return (NULL);
	else
		return (head);
}
