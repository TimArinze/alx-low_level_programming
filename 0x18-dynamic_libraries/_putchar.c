#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints -putchar, followed by newline
 * @c: character
 *
 * Return: 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
