#include <stdio.h>

/**
 * print_array - function that prints n element of an array of integers
 * separated by commas and the last element ended by newline
 * @a: first argument which is pointer to the array to be printed
 * @n: size of the array
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (a == NULL || n < 1)
		return;
	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
