#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int c;
	unsigned long long int first = 0, second = 1, next;

	printf("%llu, ", second);
	for (c = 0; c < 98; c++)
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
			printf("%llu, ", next);
		}
		if (c == 98)
		{
			printf("%llu\n", next);
		}
	}
	return (0);
}
