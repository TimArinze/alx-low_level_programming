#include "main.h"
/**
 * leet - function that replaces certain values with numbers
 * @s: string
 * Return: char
 */
char *leet(char *s)
{
	int i, j;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char number[] = "43071";

	for (i = 0; s[i] = '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = number[j];
		}
	}
	return (s);
}
