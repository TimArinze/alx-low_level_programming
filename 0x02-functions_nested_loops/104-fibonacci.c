#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int c;
	long int first = 1, second = 2, next;

	printf("%ld, ", first);
	printf("%ld, ", second);
	for (c = 0; c < 96; c++)
	{
		next = second;
		second += first;

		if (c > 97)
		{
			printf("%ld\n", second);
			break;
		}
		else
		{
			printf("%ld, ", next);
			first = next;
		}
	}
	return (0);
}
