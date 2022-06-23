#include "main.h"
/**
 * _sqrt_recursion - function that returns natural
 * square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - Returns the square of a number
 * @n: test number
 * @m: the squared number
 * Return: int
 */
int square(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (square(n, m + 1));
	else
		return (-1);
}
