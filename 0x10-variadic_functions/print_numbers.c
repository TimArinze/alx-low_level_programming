#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int number, i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(numbers, int);
		printf("%d", number);
		if (i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
