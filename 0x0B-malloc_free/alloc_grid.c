#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - A function that returns a pointer to 2 dimensional array
 * @width: the width of the 2 dimensional array
 * @height: the height of the 2 dimensional array
 * Return: Pointer to the two dimentional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return NULL;
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return array;
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
