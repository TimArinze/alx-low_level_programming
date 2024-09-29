#include <stdlib.h>
/**
 * create_array - function that creates an array of chars and initializes
 * it with a specific char
 * @size: size of the string by counting
 * @c: the char to popularize
 * Return: A pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return NULL;

	arr = malloc((size + 1) * sizeof(char));
	if (arr == NULL)
		return NULL;
	i = 0
	while (size != i)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
