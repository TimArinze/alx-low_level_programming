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
	if (n >= 0)
	{
		while (a[n])
		{
			if (a != sizeof(a) - 1)
			{
				printf("%i, ", a[n]);
			}
			else
			{
				printf("%i\n" a[n]);
			}
		}
	}
}
