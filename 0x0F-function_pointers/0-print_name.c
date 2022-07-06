#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: the name
 * @f: the pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
