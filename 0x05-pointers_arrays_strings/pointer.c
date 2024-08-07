#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int *p;
	int n;

	n = 98;
	
	/* storing address of n in p */
	p = &n;

	printf("Size of pointer: %lu\n", sizeof(p));
	printf("Address of variable 'p': %p\n", &p);

	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);

	/* dereferencing pointers */
	*p = 402;
	printf("After dereferencing\n");
	printf("Value of 'n': %d\n", n);

	return (0);
}
