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
	n = 0;

	while (a[n])
	{
		printf("%i, ", a[n]);
		a++;
	}
	_putchar('\n');
}

