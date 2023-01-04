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

	if (array == NULL)
		return (-1);
	prev = 0;
	step = 0;

	while (step < size)
	{
		prev = step;
		step += sqrt(size);
		if (array[step] >= value)
		{
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
			printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}
	if (value > array[min(step, size)])
		printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	while (prev < min(step, size))
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (array[prev] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
			return (prev);
		}
	}
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
		return (a);
	else
		return (b);
}
