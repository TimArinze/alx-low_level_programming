#include "main.h"
#include <stdio.h>
/**
 * fibonacci - function that prints fibonacci numbers
 * @i: the fibonacci number you want
 * Return: fibonacci number
 */
double fibonacci(double i)
{
	if (i == 0)
	{
		return (0);
	}

	if (i == 1)
	{
		return (1);
	}
	return (fibonacci(i - 1) + fibonacci(i - 2));
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
		printf("%f, ", fibonacci(i));
	}
	printf("%f\n", fibonacci(98));
	return (0);
}
