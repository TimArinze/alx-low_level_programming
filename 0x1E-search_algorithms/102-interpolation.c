#include "search_algos.h"
/**
 * interpolation_search - Function that searches for a value in a sorted array
 * using interpolation search algorithm
 * @array: The sorted array
 * @size: size of the array
 * @value: the key to search for
 * Return: -1 if not found or if the array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	int mid, high = size - 1, low = 0;

	if ((!array) && (!(*array)))
		return (-1);

	while ((value >= array[low]) && (value <= array[high]))
	{
		mid = ((value - array[low]) * (high - low) / (array[high] - array[low]));
		mid = mid + low;
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	printf("Value checked array[%d] is out of range\n", value);
	return (-1);
}
