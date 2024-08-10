#include <stdio.h>
#include "main.h"

void print_rev(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		x++;
	}
	while (x >= 0)
	{
		_putchar(*(str + x));
		x--;
	}
	_putchar('\n');
}
