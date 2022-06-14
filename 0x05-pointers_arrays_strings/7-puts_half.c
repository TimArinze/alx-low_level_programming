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
	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 != 0)
	{
		n = (a - 1) / 2;
	}
	else if (a == 0)
	{
		n = a;
	}
	else
	{
		n = a / 2;
	}
	a = n;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
