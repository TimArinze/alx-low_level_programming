#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n = 612852475143, div, ans;

	for (div = 2; div < n; div++)
	{
		ans = n / div;
		if (n % div == 0 && div >= ans)
		{
			printf("%i\n", div)
		}
	}
	return (0);
}
