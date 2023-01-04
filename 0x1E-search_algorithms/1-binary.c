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
	int mid, low = 0, high = size - 1, i;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i < high; i++)
		{
			printf(" %d,", array[i]);
		}
		printf(" %d\n", array[high]);
		mid = (low + high) / 2;
		if (value == array[mid])
			return (array[mid]);
		else if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
	}
	return (-1);
}
