#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function that prints times time
 *
 * @n: function argument
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b != 0 && c >= 0 && c < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (c < 10)
				{
					_putchar('0' + c);
				}
				if (c > 9 && c < 100)
				{
					_putchar(' ');
					_putchar('0' + (c / 10));
					_putchar('0' + (c % 10));
				}
				if (c > 99)
				{
					_putchar('0' + (c / 100));
					_putchar('0' + ((c / 10) % 10));
					_putchar('0' + (c % 10));
				}
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
