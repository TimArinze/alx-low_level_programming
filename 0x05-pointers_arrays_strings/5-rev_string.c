#include "main.h"
/**
 * rev_string - reverse string function
 * @s: parameter
 */
void rev_string(char *s)
{
	char *a = s;
	char n[1000];
	int c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > a)
	{
		s--;
		*s = n[c];
		c++;
	}
}
