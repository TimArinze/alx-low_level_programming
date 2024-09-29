#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
	char *s;
	int i;

	while (1)
	{
		s = malloc(INT_MAX);
		if (s == NULL)
		{
			printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);
			return (1);
		}
		s[0] = 'H';
		i++;
	}
	return (0);
}
