#include "main.h"
/**
 * print_number - function that prints integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	/**
	 * first remove the last digit of number
	 * and print the remaining digit using
	 * recursion, then print the last digit
	 */
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
