#include "main.h"
/**
 * flip_bits - returns hamming distance of two bits words
 *
 * @n: the first bit word
 * @m: second bit word
 * Return: the hamming distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * BYTE_LENGTH);
	int dist = 0;

	while (shift--)
		dist += (n >> shift & 1) != (m >> shift & 1);
	return (dist);
}
