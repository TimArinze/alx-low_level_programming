#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints
 * arrays separated by commas
 * @n: array
 * @a: pointer
 * Return: void
 */
void print_array(int *a, int n)
{
	int size;

	size = n - 1;
	if (size > 0)
	{
		n = 0;
		while (a[n])
		{

			if (n < size)
			{
				printf("%i, ", a[n]);
			}
			if (n == size)
			{
				printf("%i\n", a[n]);
			}
			n++;
		}
	}
	else
		_putchar('\n');
}
