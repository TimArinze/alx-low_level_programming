#include "main.h"
#include <stdio.h>
/**
 * fibonacci - function that prints fibonacci numbers
 * @i: the fibonacci number you want
 * Return: fibonacci number
 */
long fibonacci(int i)
{
	if (i <= 1)
	{
		return (i);
	}
	else
	{
		return (fibonacci(i - 1) + fibonacci(i - 2));
	}
}
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 2; i < 98; i++)
	{
		printf("%ld, ", fibonacci(i));
	}
	printf("%ld\n", fibonacci(98));
	return (0);
}
