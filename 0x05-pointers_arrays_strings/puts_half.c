#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints second half of a string
 *
 * @str: The argument the string to be printed
 */

void puts_half(char *str)
{
	int i = 0;
	int n;
	
	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
		n = (i - 1)/2;
	else
		n = i/2;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
