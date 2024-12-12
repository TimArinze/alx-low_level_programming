#include "main.h"
/**
 * cap_string - function that capitalizes string
 * @: string as an array
 */
char *cap_string(char *s)
{
	char *separators = ",\t\n; .!?\"(){}";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] ==separators[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
