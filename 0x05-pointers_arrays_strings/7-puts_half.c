#include "main.h"
/**
 * puts_half - function that prints
 * from the second half
 * @str: parameter
 */
void puts_half(char *str)
{
	int a, len, n;

	a = 0;
	while (str[a] != 0)
	{
		len = a;
		a++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else if (len == 0)
	{
		n = len;
	}
	else
	{
		n = len / 2;
	}
	a = n;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
