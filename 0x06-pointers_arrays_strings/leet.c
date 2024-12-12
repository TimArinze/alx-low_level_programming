#include "main.h"
/**
 * leet - function that encodes a string to 1337
 * @str: the string to be encoded
 * Return: Pointer to char
 */
char *leet(char *str)
{
	char *letter = "aeotl";
	char *bletter = "AEOTL";
	int i, j;

	char *number = "43071";

	j = 0;
	while (str[j] != '\0')
	{
		for (i = 0; letter[i] != '\0'; i++)
		{
			if (letter[i] == str[j] || bletter[i] == str[j])
			{
				str[j] = number[i];
			}
		}
		j++;
	}
	return (str);
}
