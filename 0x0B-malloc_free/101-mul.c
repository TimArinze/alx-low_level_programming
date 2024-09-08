#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function that multiples two numbers
 * argc - the counter
 * argv - the array
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int mul;
	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
