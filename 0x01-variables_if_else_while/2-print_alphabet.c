#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char alphabet;

	for (alphabet = 'a', alphabet <= 'z', ++alphabet)
		putchar("%c\n", alphabet);
	putchar("\n");
	return (0);
}
