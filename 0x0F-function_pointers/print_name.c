#include "function_pointers.h"
/**
 * print_name - A function that prints name
 * @name: the name to be printed
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
