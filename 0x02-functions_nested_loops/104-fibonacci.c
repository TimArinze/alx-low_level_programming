#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	float first = 1, second = 2, next, c;

	for (c = 0; c <= 97; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if (c != 98)
		{
			printf("%.0f, ", next);
		}
		else
		{
			printf("%.0f\n", next);
		}
	}
	return (0);
}
