#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry function
 * @argc: counts of argv
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned long num1;
	unsigned long num2;
	unsigned long mul;

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	if ((!num1 || !num2) && argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	mul = num1 * num2;
	printf("%lu\n", mul);
	return (0);
}
