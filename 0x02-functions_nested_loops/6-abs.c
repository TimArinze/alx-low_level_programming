#include "main.h"
/**
 * _abs - prints the absolute value
 *
 *@int: function argument
 *
 * Return: Always return 0
 */
int _abs(int)
{
	int n;

	if (n < 0)
	{
		n *= -1;
		_putchar('0' + n);
	}
	else
	{
		_putchar('0' + n);
	}
}
