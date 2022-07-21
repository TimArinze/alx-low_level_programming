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
	listint_t *temp, *ptr;
	/* ptr is like a new temp the pointer of the newly created node */

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);
	temp->next = NULL;
	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		(*head) = temp;
		return (temp);
	}

	ptr = *head;
	while (idx != 1)
	{
		ptr = ptr->next;
		if (ptr = NULL)
		{
			free(temp);
			return (temp);
		}
		--idx;
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return (temp);
}
