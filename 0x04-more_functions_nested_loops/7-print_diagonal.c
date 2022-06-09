#include "main.h"
/**
 * print_diagonal - function
 * @n: n
 * Return: 0
 */
void print_diagonal(int n)
{
	int a;
	int b = 0;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
