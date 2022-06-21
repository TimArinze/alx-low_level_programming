#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the
 * two diagonals
 * @a: the array
 * @size: the size of the  array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; ++i)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
