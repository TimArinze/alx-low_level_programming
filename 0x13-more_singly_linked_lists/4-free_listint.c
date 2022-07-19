#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint - Function that frees a listint_t list
 * @head: the head
 */
void free_listint(listint_t *head)
{
	while (head)
		free(head);
}
