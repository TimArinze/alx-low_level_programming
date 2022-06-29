#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns two dimensional
 * array
 * @width: rows
 * @height: columns
 * Return: pointer to 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j, size;
	int **m;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(width * sizeof(int));
	if (m == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		m[i] = malloc(sizeof(int) * height);
		if (m[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(m[i]);
			}
			free(m);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			m[i][j] = 0;
		}
	}
	return (m);
}
