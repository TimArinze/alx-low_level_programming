#include "main.h"
/**
 * _abs - prints the absolute value
 *
 *@n: function argument
 *
 * Return: Always return 0
 */
int _abs(int n)
{
	int number;

	if (n < 0)
	{
		number = n * (-1);
		return (number);
	}
	else
	{
		return (n);
	}
	return (0);
}
