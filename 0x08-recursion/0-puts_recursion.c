#include "main.h"
/**
 * _puts_recursion - function that prints strings
 * @s: string pointer
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
		return('\n');

	_putchar(_puts_recursion(*s));
}
