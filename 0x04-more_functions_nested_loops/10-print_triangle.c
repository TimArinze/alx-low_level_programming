#include "main.h"
/**
 * print_triangle - function
 * @size: variable
 * Return: 0
 */
void print_triangle(int size)
{
	int a, b = 0, c;

	if (size > 0)
	{
		for (a = 0; a <= size; a++)
		{
			for (b = 0; b < size - a; b++)
			{
				_putchar(' ');
			}
			for (c = 0; c < a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
