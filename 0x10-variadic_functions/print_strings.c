#include <stdio.h>
#include <stdarg.h>


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list names;
	unsigned int i;
	char *name;

	va_start(names, n);
	if (!separator)
		return;
	for (i = 0; i < n; i++)
	{
		name = va_arg(names, char *);
		if (name == NULL)
			printf("nil");
		if (i != n - 1)
			printf("%s%s", name, separator);
	}
	printf("%s\n", name);
}
