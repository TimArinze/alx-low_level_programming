#include "main.h"
#include <stdlib.h>
/**
 * _strlen - strlen
 * @s: pointer
 * Return: the length
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return(i);
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
	unsigned int len, decimal = 0;
	int i;


	if (b == NULL)
		return (0);

	len = _strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[len - i - 1] == '1')
		{
			decimal += 1 << i;
			/* this shifts it thats like multiply by 2*/
		}
		else if (b[len - i - 1] != '0')
	}
	return (decimal);
}
