#include <stdio.h>
/**
 * main - Creates an array of chars and prints it
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[6];

	*a = 'S';
	*(a + 1) = 'c';
	*(a + 2) = 'h';
	a[3] = 'o';
	*(a + 4) = 'o';
	a[5] = 'l';

	printf("%c%c%c%c%c%c\n", a[0], a[1],a[2],a[3],a[4],a[5]);
	char b[7] = "School";

	printf("%s\n", b);
	printf("Value of the last char of b: %d\n", b[9]);
	printf("Value of b: %p\n", b);
	printf("Value of \"School\": %p\n", "School");

	return (0);
}
