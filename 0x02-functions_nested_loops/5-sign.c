#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 *
 * @n: function argument
 *
 * Return: 0 if 0, -1 if -ve and 1 if +ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0' + n);
		return (0);
	}
}
