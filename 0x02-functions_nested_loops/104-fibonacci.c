#include "main.h"
#include <stdio.h>
/**
 * fibonacci - function that prints fibonacci numbers
 * @i: the fibonacci number you want
 * Return: fibonacci number
 */
unsigned int fibonacci(unsigned int i)
{
	if (i <= 1)
	{
		return(i);
	}
	else
	{
		return(fibonacci(i - 1) + fibonacci(i - 2));
	}
}
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned int i;

	for (i = 2; i < 40; i++)
	{
		printf("%d, ", fibonacci(i));
	}
	printf("%d\n", fibonacci(i - 1));
	return (0);
}
