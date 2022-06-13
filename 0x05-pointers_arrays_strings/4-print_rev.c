#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		s++;
		a++;
	}

	while (a > 0)
	{
		s--;
		_putchar(*s);
		a--;
	}
	_putchar('\n');

}
