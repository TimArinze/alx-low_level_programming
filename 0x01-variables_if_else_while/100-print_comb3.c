#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	n = 0
	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			if (n != m && n < m)
			{
				putchar('0' + n);
				putchar('0' + m);

				if (n + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
