#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes function given as parameter
 * on each element of an array
 * @array: Array
 * @size: Size of the array
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
