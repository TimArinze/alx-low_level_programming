#include "main.h"
/**
 * get_bit - gets bit on index
 * @n: decimal
 * @index: index
 * Return: bit found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_LENGTH)
		return (-1);
	return ((n >> index) & 1);
}
