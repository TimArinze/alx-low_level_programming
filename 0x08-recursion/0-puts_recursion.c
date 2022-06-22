#include "main.h"
/**
 * _puts_recursion - function that prints strings
 * @s: string pointer
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (s[i] != '\0')
	{
		_puts_recursion(s[i]);
	}
	_putchar('\n');
}
