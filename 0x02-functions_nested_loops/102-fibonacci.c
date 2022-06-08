#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2, k;

	printf("%ld, ", i);
	for (; count <= 50; count++)
	{
		if (count == 50)
		{
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld, ", j);
		}
		k = j;
		j += i;
		i = k;
	}
	return (0);
}
