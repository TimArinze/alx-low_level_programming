#include "main.h"
/**
 * reverse_array - function that reserves array
 * @a: array to be reversed
 * @n: the number of element in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		a--;
	}
}

