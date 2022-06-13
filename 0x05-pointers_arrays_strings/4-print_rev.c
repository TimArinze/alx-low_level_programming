#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int a, length;

	length = strlen(s);
	a = length;
	while (s[a])
	{
		_putchar(a);
		a--;
	}
	_putchar('\n');
}

