#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers
 *
 * @n: function argument
 *
 * Return: Always
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a > 99)
			{
				_putchar('0' + (a / 100));
				_putchar('0' + ((a / 10) % 10));
				_putchar('0' + (a % 100));
			}
			if (a < 100)
			{
				_putchar('0' + (a / 10));
				_putchar('0' + (a % 10));
			}
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n < 98 && n >= 0)
	{
		for (a = n; a <= 98; a++)
		{
			if (a < 10)
			{
				_putchar('0' + a);
			}
			if (a > 10)
			{
				_putchar('0' + (a / 10));
				_putchar('0' + (a % 10));
			}
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n < 98 && n < 0)
	{
		for (a = n; a <= 98; a++)
		{
			if (a < 0)
			{
				a *= -1;
				if (a > 9)
				{
					_putchar('0' + (a / 10));
					_putchar('0' + (a % 10));
				}
				if (a <= 9)
				{
					_putchar('0' + a);
				}
			}
			if (a >= 0)
			{
				if (a > 9)
				{
					_putchar('0' + (a / 10));
					_putchar('0' + (a % 10));
				}
				if (a <= 9)
				{
					_putchar('0' + a);
				}
			}
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n == 98)
	{
		_putchar('0' + (a / 10));
		_putchar('0' + (a % 10));
	}
}
