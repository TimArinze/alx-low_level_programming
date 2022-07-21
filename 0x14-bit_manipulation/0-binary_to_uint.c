#include "main.h"
#include <stdlib.h>
/**
 * _atoi - atoi
 * @s: string
 * Return: int
 */
int _atoi(const char *s)
{
	int i, res = 0, sig = -1, brk = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res = res - (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}
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

	binary = _atoi(b);

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
