#include "main.h"
/**
 * _pow_recursion - function that returns the
 * the value of x raised to y
 * @x: the number
 * @y: the power
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int value;

	if (y < 0)
		return (-1);
	if (y == 0)
		value = 1;
	else
		value = x * _pow_recursion(x, (y - 1));
	return (value);
}
