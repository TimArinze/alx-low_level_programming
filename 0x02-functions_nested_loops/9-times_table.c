#include "main.h"
/**
 * times_table - function that prints times table
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b
			_putchar('0' + (c / 10));
			_putchar('0' + (c % 10));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
