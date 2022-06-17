#include "main.h"
/**
 * print_number - function that prints integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int a = 0;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
		a = n;
	/**
	 * first remove the last digit of number
	 * and print the remaining digit using
	 * recursion, then print the last digit
	 */
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
