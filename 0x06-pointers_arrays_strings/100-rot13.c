#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @s: the string
 * Return: char
 */
char *rot13(char *s)
{
	int i, j;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char N[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == A[j])
			{
				s[i] = N[j];
			}
		}
	}
	return (s);
}
