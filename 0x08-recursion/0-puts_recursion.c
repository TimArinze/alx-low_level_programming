#include "main.h"
/**
 * _puts_recursion - function that prints strings
 * @s: string pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	_putchar(s[i]);

	if (s[i] != '\0')
	{
		_puts_recursion(s);
	}
	_putchar('\n');
}
