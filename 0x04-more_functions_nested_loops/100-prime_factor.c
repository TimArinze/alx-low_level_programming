#include <stdio.h>
/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	int n = 612852475143, ans, div;

	for (div = 2; div < n; div++)
	{
		ans = n / div;
		if (n % div == 0 && div >= ans)
		{
			printf(div);
		}
	}
	return (0);
}
