#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @s: the string
 * Return: char
 */
char *rot13(char *s)
{
	int i, j;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char N[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	char n[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == A[j])
				s[i] = N[j];
			else
				s[i] = n[j];
		}
	}
	return (s);
}
