#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - As the name implies
 *
 * @head: head
 * @idx: index of the list where the new node should be
 * added. index starts at 0
 * @n: data
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *ptr;
	/* ptr is like a new temp the pointer of the newly created node */

	temp = malloc(sizeof(listint_t));

	(temp)->n = n;
	(temp)->next = NULL;

	if (temp == NULL)
		return (NULL);
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}

	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	temp->next = ptr->next;
	temp = ptr->next;
	return (temp);
}
