#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
