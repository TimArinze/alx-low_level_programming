#include "main.h"
/**
 * print_number - function
 * @n: variable
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n >= 0 && n < 10)
	{
		_putchar('0' + n);
	}
	if (n >= 10 && n < 100)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	if (n >= 100 && n < 1000)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	if (n >= 1000 && n < 10000)
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	if (n >= 10000 && n < 100000)
	{
		_putchar('0' + (n / 10000));
		_putchar('0' + ((n / 1000) % 10));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
}
