#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	print_listint(head);
	free_listint(head);
	head = NULL;
	return (0);
}
