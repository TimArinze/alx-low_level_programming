#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: number of btyes
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	char *temp = s;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (accept[0] == '\0')
			return (0);

		if (s[i] == accept[i])
			return (s - temp);
	}
}
