#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - A function that counts the number
 * of bits you would need to flip to get from one
 * number to another
 * @n: first number
 * @m: second number
 * Return: the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipped, dist = 0;

	flipped = m ^ n;
	while (flipped)
	{
		dist +=(flipped & 1);
		flipped = flipped >> 1;
	}
	return (dist);
}
