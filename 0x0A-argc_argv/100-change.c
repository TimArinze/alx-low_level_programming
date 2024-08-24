#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number possible change
 * @argc: arg count
 * @argv: the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int money, i, n;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	i = 0;
	while (money > 0)
	{
		n = 0;
		while (n < 5)
		{
			if (change[n] <= money)
			{
				money = money - change[n];
				break;
			}
			n++;
		}
		i++;
	}
	printf("%d\n", i);
	return (0);
}
