#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Function that searches for value in sorted array of integers
 * @array: Array of integers to be searched
 * @size: Size of the Array
 * @value: Value to be searched for
 * Return: -1 if value not in array or the value is null else the index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;

	if (!value)
		return (-1);
	step = sqrt(size);
	prev = 0;
	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	while (array[prev] < value)
	{
		prev++;
		if (prev == min(size, step))
			return (-1);
	}
	if (array[prev] == value)
		return prev;
	return (-1);
}
/**
 * min - checks the one that is smaller
 * @a: to be checked
 * @b: to be checked
 * Return: Either a or b the smaller between them
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return a;
	else
		return b;
}
