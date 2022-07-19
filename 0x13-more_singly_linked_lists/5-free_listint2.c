#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Function that frees a listint_t list
 * And sets the head to NULL
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
