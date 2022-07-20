#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
int main(void)
{
	listint_t *head;
	int sum;
	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	sum = sum_listint(head);
	printf("sum = %d\n", sum);
	return (0);
}
