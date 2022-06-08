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
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if (c != 95 && next > 1)
		{
			printf("%.0f, ", next);
		}
		if (c == 95)
		{
			printf("%.0f\n", next);
		}
	}
	return (0);
}
