#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: A pointer to the bit
 * @index: the index to se the value at..indices starts at 0
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BYTE_LENGTH))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
