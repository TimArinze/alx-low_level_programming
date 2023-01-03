#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: The array to be searched
 * @size: The size of the array
 * @value: value to search
 * Return: if value not present or NULL return -1 else the first index where
 * the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
