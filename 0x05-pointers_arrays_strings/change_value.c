#include <stdio.h>
void change_value(int *nb);

/**
 * main - takes variable and change it
 *
 */
void main(void)
{
	int nb;
	change_value(&nb);
	printf("%d\n", nb);
}

void change_value(int *nb)
{
	*nb = 1337;
}
