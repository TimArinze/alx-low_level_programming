#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
int main(void)
{
	listint_t *head;
	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	insert_nodeint_at_index(&head, 1, 4096);
	print_listint(head);
	return (0);
}
