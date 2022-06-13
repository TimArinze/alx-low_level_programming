#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int a;

	a = _strlen(s);
	while (a >= 0)
	{
		_putchar(a);
		a--;
	}
}

