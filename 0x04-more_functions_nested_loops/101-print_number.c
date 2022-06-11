#include "main.h"
/**
 * print_number - prints numbers
 * @n: number printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int a = 0;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
	{
		a = n;
	/**
	 * First remove the last digit of number and print the remaining
	 * digits using recursion, then print the last digit
	 */
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
