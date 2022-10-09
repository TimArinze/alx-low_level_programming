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
	listint_t *new, *ptr;
	/* ptr is like a new temp the pointer of the newly created node */

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	ptr = *head;
	while (idx != 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			free(new);
			return (NULL);
		}
		--idx;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
