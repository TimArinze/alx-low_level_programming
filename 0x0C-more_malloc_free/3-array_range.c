#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: int
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *m;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(*m) * (max - min));
	if (m == 0)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		m[j] = i;
		j++;
	}
	return (m);
}
