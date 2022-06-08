#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, total = 0, c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			total += b;

		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", total);
	return (0);
}
