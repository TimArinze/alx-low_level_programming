#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	float first = 0, second = 1, next, c;

	printf("%.0f, ", second);
	for (c = 0; c <= 98; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if (c != 98 && next > 1)
		{
			printf("%.0f, ", next);
		}
		if (c == 98)
		{
			printf("%.0f\n", next);
		}
	}
	return (0);
}
