#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Function that frees a listint_t list
 * @head: the head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
