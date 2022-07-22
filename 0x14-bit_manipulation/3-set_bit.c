#include "main.h"
/**
 * set_bit - gets bit on index
 * @n: decimal number
 * @index: index of the bit
 * Return: 1 success or -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BYTE_LENGTH))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
