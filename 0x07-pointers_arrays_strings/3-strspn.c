#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * before the null value
 * @s: string
 * @accept: number of btyes
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[j] == accept[i])
				break;
		}
		if (!s[j])
			break;
	}
	return (i);
}
