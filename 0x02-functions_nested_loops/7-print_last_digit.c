#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: function
 *
 * Return: Always last digit
 */
int print_last_digit(int n)
{
	int number;

	number = n % 10;
	if (number < 0)
	{
		number *= -1;
		_putchar('0' + number);
		return (number);
	}
	else
	{
		_putchar('0' + number);
		return (number);
	}
}
