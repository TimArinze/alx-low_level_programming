#include "main.h"
/**
 * _sqrt_recursion - function that returns natural
 * square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int a, result;

	if (n / a != a)
		return (-1);
	if (n == 1)
		result = 1;
	else
	{
		result = n / _sqrt_recursion(n);
	}
	return (result);
}
