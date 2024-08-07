#include <stdio.h>
void f(int *a);

/**
 * main - Illustrating the array type decay
 *
 * Return: Always 0
 */

int main(void)
{
	int *p;
	int t[10];

	p = t; /* This works because of the auto implicit conversion to (int *) */
	printf("t: %p\n", t);
	printf("&t[0]: %p\n", &t[0]);
	printf("p: %p\n", p);
	f(t);

	/* prints the sizeuof an array */

	int array[10];

	printf("sizeof array: %lu\n", sizeof(array));
	
	/* prints the address of an array */
	char b[98];

	printf("b: %p\n", b);
	printf("&b: %p\n", &b);

	/** showing that b and &b though print same address is not same datatype
	 * b is of type char[98] that is the size is 98
	 * &b is of type char (*) pointing to address which size is 8
	 */


	printf("sizeof(b): %lu\n", sizeof(b));
	printf("sizeof(&b): %lu\n", sizeof(&b));

	return (0);
}

/**
 * f - prints the value of a pointer of type int
 * @: address of an integer we need to print
 *
 * Return: Nothing.
 */

void f(int *a)
{
	printf("a: %p\n", a);
	return;
}
