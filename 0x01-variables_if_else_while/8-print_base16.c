#include <stdio.c>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int n;

	for (c = '0'; c <= 9; c++)
		putchar(c);
	for (n = 'a'; n <= 'f'; n++)
		putchar('0', n);
	putchar('\n');
	return (0);
}
