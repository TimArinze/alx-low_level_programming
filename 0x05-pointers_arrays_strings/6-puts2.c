#include "main.h"
/**
 * puts2 - prints every other character from first and jump the second
 * @str: String argument
 * Return: nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
