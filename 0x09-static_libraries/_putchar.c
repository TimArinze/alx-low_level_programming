#include "main.h"

/**
 * main - prints -putchar, followed by newline
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *putchar;

	for (putchar = "_putchar\n"; *putchar != '\0'; ++putchar)
	{
		_putchar(*putchar);
	}
	return (0);
}
