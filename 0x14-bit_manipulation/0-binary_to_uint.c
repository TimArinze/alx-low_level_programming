#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - Function that converts a binary
 * to an unsigned int
 * @b: string to be convert
 *
 * Return: the converted number or 0 if in the string
 * is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, binary, reminder, weight = 1, decimal = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		if (b[i] < '0' || b[i] > '1')
			return (0);

	binary = atoi(b);

	while (binary != 0)
	{
		reminder = binary % 10;
		if (reminder < 2)
		{
			decimal  = decimal + (weight * reminder);
			binary = binary / 10;
			weight = weight * 2;
		}
		else
			decimal = 0;
	}
	return (decimal);
}
