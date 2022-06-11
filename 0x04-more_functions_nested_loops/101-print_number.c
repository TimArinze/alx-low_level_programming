#include "main.h"
/**
 * print_number - prints numbers
 * @n: number printed
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	/**
	 * First remove the last digit of number and print the remaining
	 * digits using recursion, then print the last digit
	 */
	if (n != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
