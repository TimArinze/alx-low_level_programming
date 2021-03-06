#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints string followed by new line
 * @separator: a separator
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *c;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ptr, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
