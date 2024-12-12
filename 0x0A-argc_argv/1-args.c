#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry function
 * @argv: string array
 * @argc: counter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
