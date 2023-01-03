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
	int mid, low = 0, high = size - 1, j;

	if (array == NULL)
		return (-1);
	print(array, size);
	while (low != high)
	{
		mid = (low + high) / 2;
		if (value == array[mid])
			return (array[mid]);
		else if (value > array[mid])
		{
			low = mid + 1;
			printf("Searching in array:");
			for (j = low; j <= high; j++)
			{
				if (j == high)
					printf(" %d\n", array[j]);
				else
					printf(" %d,", array[j]);
			}
		}
		else
		{
			high = mid - 1;
			printf("Searching in array:");
			for (j = low; j <= high; j++)
			{
				if (j == high)
					printf(" %d\n", array[j]);
				else
					printf(" %d,", array[j]);
			}
		}
	}
	return (-1);
}

/**
 * print - prints the array
 * @array: the array
 * @size: the size
 */
void print(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf(" %d\n", array[i]);
		else
			printf(" %d,", array[i]);
	}
}
