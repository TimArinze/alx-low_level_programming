#include "main.h"
/**
 * reverse_array - function that reverses the content of an array
 * @n: n parameter is the element number
 */
void reverse_array(int *a, int n)
{
	int *end;
	int tmp, i;

	end = a;
	i = 0;
	while (i < n)
	{
		end++;
		i++;
	}
	end--;
	while (a < end)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
		a++;
		end--;
	}
}
