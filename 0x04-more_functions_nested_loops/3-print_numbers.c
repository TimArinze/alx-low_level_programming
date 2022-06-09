#include "main.h"
/**
 * print_numbers - function that prints
 *
 * Return: 0
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
