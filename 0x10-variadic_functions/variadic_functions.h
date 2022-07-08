#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

void print_int(va_list ptr);
void print_float(va_list ptr);
void print_char(va_list ptr);
void print_str(va_list ptr);
/**
 * struct printTypeStruct - struct
 * @type: type
 * @printer: function to print
 */
typedef struct printTypeStruct
{
	char *type;
	void (*printer)(va_list);
} printTypeStruct;

#endif
