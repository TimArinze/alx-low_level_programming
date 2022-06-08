#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	float a = 1, b = 2, c = 0, i;

	printf(" 1, 2");
	for (i = 1; i <= 96; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %.0f", c);
	}
	printf("\n");
	return (0);
}
