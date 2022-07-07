#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints number
 * @separator: separator
 * @n: the number of the integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	if (n != 0 || separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(ptr, unsigned int));
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
