#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_int - function
 * @ptr: list
 */
void print_int(va_list ptr)
{
	printf("%i", va_arg(ptr, int));
}
/**
 * print_float - function
 * @ptr: list
 */
void print_float(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}
/**
 * print_char - function
 * @ptr: list
 */
void print_char(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}
/**
 * print_str - function
 * @ptr: list
 */
void print_str(va_list ptr)
{
	char *c = va_arg(ptr, char *);

	if (c == NULL)
		printf("(nil)");
	else
		printf("%s", c);
}
/**
 * print_all - function
 * @format: type
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ptr;
	char *separator = "";

	printTypeStruct printType[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(ptr, format);

	for (i = 0; format && format[i]; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				break;
			}
		}
	}
	printf("\n");
	va_end(ptr);
}
