#include <stddef.h>
#include "lists.h"
/**
 * function - reverse_listint a function that reverses a linked list
 * @head: The linked list that is to be reversed
 * Return: The reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *start, *prev;


	if (*head == NULL)
		return (NULL);
	temp = NULL;
	start = *head;
	prev = NULL;

	while (start != NULL)
	{
		/* To save the address of the next node */
		temp = start->next;
		/* To reverse where the start-next node is pointing to prev */	
		start->next = prev;
		/* To move the previous node to the current node */
		prev = start;
		/* To move start to the next node saved using temp */
		start = temp;

	}
	*head = prev;
	return (*head);
}
