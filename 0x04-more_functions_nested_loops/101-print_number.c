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
		n *= -1;
		_putchar('-');
	}
	if (n == 0)
		_putchar('0');
	/**
	 * First remove the last digit of number and print the remaining
	 * digits using recursion, then print the last digit
	 */
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
