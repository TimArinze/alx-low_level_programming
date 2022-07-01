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
	int mul = 1, i;

	for (i = 1; i < argc; i++)
	{
		if (argc != 3 && (argv[i] < 0 || argv[i] > 9))
			printf("Error\n");
		exit(98);

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (98);
	}
}
