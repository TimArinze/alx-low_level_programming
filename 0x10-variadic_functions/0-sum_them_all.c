#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of the said parameter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int sum = 0, i = 0;

	/*Initializing argument to the list pointer*/
	va_start(ptr, n);
	if (n != 0)
		while (i < n)
		{
			sum += va_arg(ptr, unsigned int);
			i++;
		}
	va_end(ptr);

	return (sum);
}
