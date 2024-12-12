#include "main.h"
#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
		if (j >= n) break;
	}

	return (dest);
}
