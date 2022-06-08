#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a, result;

	result = 0;
	for (a = 1; a < 1024; a++)
	{
		if (a % 3 == 0)
			result += a;
		else if (a % 5 == 0)
			result += a;
	}
	printf("%d\n", result);
	return (0);
}
