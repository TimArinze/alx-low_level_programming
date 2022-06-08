#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c, i;

	printf(" 1, 2");
	for (i = 1; i <= 96; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %d", r);
	}
	printf("\n");
	return (0);
}
