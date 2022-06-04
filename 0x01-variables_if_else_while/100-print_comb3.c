#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
		if (n != 1 && n != 10 && n != 11 && n != 22 && n != 33 && n != 44
				&& n != 55 && n != 66 && n != 77 && n != 88 && n != 99)
			putchar('0' + n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
	}
	return (0);
}
