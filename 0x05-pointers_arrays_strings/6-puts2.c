#include "main.h"
/**
 * puts2 - prints every other character from first
 * @str: String
 * Return: 0
 */
void puts2(char *str)
{
	int a = 0, b = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	while (b < a)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
