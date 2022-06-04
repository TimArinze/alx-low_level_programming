#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = 'a'; ((d <= 'z') && (d != 'e') && (d != 'q')); d++)
		putchar(d);
	putchar('\n');
	return (0);
}
