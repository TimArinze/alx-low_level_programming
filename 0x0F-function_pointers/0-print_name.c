#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints name
 * @name: the name
 * @f: the pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
