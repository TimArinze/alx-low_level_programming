#include "main.h"
/**
 * puts2 - prints every other character from first
 * @str: String
 * Return: 0
 */
void puts2(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		str = str + 2;
		_putchar(*str);
		a = a + 2;
	}
	_putchar('\n');
}
