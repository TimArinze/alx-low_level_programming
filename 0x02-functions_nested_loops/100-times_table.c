#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function that prints times time
 *
 * @n: function argument
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int a, b, result;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				result = a * b;
				if (b == n)
				{
					printf("%3i", result);
				}
				else if (b == 0)
				{
					printf("%i,", result);
				}
				else
				{
					printf("%3i, ", result);
				}
			}
			printf("\n");
		}
	}
}
