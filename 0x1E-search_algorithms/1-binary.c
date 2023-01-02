#include "search_algos.h"
/**
 * binary_search - Function that searches for a value in a sorted array
 * @array: Array to be searched
 * @size: Size of the array
 * @value: The value to search for
 * Return: -1 if value not found or NULL or the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, low, high;

	low = array[0];
	high = array[size - 1];
	while (low != high)
	{
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		else if (value > mid)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
