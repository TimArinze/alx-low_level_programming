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
	double first = 1, second = 2, next;

	printf("%.0f, ", first);
	printf("%.0f, ", second);
	for (c = 0; c < 96; c++)
	{
		next = second;
		second += first;

		if (c > 97)
		{
			printf("%.0f\n", second);
			break;
		}
		else
		{
			printf("%.0f, ", next);
			first = next;
		}
	}
	return (0);
}
