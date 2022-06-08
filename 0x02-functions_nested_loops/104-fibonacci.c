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
	for (c = 0; c <= 98; c++)
	{
		next = second;
		second += first;

		if (c > 98)
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
