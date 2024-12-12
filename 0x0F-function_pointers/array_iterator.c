#include "function_pointers.h"
/**
 * array_iterator - a function that executes function given as parameter on
 * each element of an array
 * @array: the array
 * @size: Size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (action)(int))
{
	int i = 0;

	while (size > 0)
	{
		action(array[i]);
		i++; size--;
	}
}
