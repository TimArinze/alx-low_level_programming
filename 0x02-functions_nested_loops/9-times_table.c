#include "main.h"
/**
 * times_table - function that prints times table
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar('0' + (a * b));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
