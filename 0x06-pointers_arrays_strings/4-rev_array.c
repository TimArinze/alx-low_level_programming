#include "main.h"
/**
 * reverse_array - function that reserves array
 * @a: array to be reversed
 * @n: the number of element in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; a[i] != '\0'; i--)
		*a = a[i];
}
