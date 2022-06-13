#include "main.h"
/**
 * rev_string - reverse string function
 * @s: parameter
 */
void rev_string(char *s)
{

	while (*s != 0)
	{
		s++;
	}
	while (s > 0)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
