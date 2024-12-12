#include <stdio.h>
#include<stdarg.h>

typedef struct types
{
	const char *type;
	void (*f)(va_list);
} type_t;

void print_char(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}

void print_int(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}
void print_float(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}
void print_str(va_list ptr)
{
	char *str = va_arg(ptr, char *);
	printf("%s", str ? str : "(nil)");
}


void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	type_t types[] = {
        	{"c", print_char},
        	{"i", print_int},
        	{"f", print_float},
        	{"s", print_str},
        	{NULL, NULL}
	};
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (types[j].type[0])
		{
			if (types[j].type[0] == format[i])
			{
				types[j].f(args);
				printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
