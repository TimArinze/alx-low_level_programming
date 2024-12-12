#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;
	j = 0;
	while (s[j] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
			{
				n++;
			}
			i++;
		}
		j++;
	}
	n++;
	return (n);
}
