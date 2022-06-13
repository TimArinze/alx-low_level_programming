#include "main.h"
/**
 * rev_string - reverse string function
 * @s: parameter
 */
void rev_string(char *s)
{
	int a = 0;

	while (*s != 0)
	{
		s++;
	}
	while (a > 0)
	{
		s--;
		_putchar(*s);
		a--;
	}
	_putchar('\n');
}
