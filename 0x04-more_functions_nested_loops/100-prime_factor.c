#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143, div, ans;

	for (div = 2; div < n; div++)
	{
		if (n % div == 0)
		{
			ans = n / div;
		}
	}
	printf("%li\n", ans);
	return (0);
}
