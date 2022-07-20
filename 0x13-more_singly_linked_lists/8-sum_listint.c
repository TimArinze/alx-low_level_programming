#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data(n)
 * of a listint_t linked list
 * @head: head
 * Return: the sume of all the data
 */
int sum_listint(listint_t *head)
{
	int i;

	if (head == NULL)
		return (0);
	head->n = 0;
	for (i = 0; head != NULL; i++)
	{
		head = head->next;
		head->n += head->n;
	}
	return (head->n);
}
