#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of the said parameter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;

	if (n == 0)
		return (0);

	/* Declaring pointer to the argument list */
	va_list ptr;

	/*Initializing argument to the list pointer*/
	va_start(ptr, n);

	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);

	return (sum);
}
