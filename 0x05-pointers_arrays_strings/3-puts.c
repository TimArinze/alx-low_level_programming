#include "main.h"
/**
 * _puts - function that prints a string
 * @str: parameter
 * Return: void
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
}
