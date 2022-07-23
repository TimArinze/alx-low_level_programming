#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - Function that checks endianess
 *
 * @void: noting
 * Return: 0 if big endian and 1 if little endian
 *
 */
int get_endianness(void)
{
	char *c;
	int i = 1;

	*c = (char *) &i;
	if (*c)
		return (1);
	else
		return (0);
}
