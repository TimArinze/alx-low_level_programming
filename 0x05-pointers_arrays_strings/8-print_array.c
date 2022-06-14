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

	size = sizeof(a);
	if (size >= 0)
	{
		n = 0;
		while (a[n])
		{

			if (n != size - 1)
			{
				printf("%i, ", a[n]);
			}
			else
			{
				printf("%i\n", a[n]);
			}
			n++;
		}
	}
}
