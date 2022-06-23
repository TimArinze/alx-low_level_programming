#include "main.h"
/**
 * _sqrt_recursion - function that returns natural
 * square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt(0, n));
}
/**
 * _sqrt - Returns the square of a number
 * @n: test number
 * @m: the squared number
 * Return: int
 */
int _sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (_sqrt(n, m + 1));
	else
		return (-1);
}
