#include "main.h"
/**
 * is_prime_number - function that returns 1
 * @n: number to be checked
 * Return: int
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - function of prime number
 * @n: the number
 * @div: the divisor
 * Return: int
 */
int prime(int n, int div)
{
	if (n == div && n > 1)
		return (1);
	else if (n % div == 0 || n <= 1)
		return (0);
	else
		return (prime(n, div + 1));
}
