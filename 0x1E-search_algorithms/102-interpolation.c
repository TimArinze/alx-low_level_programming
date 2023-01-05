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
	int mid, high = size - 1, low = 0, key = value;
	int *arr;

	arr = array;

	if (!arr)
		return (-1);

	while ((arr[high] != arr[low]) && (key >= arr[low]) && (key <= arr[high]))
	{
		mid = low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (arr[mid] < value)
			low = mid + 1;
		else if (value < arr[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == arr[low])
		return (low);
	printf("Value checked array[%d] is out of range\n", key);
	return (-1);
}
