#include "lists.h"
/**
 * sum_dlistint - Fuction that returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: head
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
