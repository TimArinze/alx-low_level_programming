#include "main.h"
#include "string.h"
/**
 * is_palindrome - A function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: the string
 * Return: int
 */
int is_palindrome(char *s)
{
	int i, j;

	i = 0;
	j = strlen(*s) - 1;
	return (i, j);
}
/**
 * check_palindrome - function
 * @s: string
 * @i: interger
 * @j: interger
 * Return: int
 */
int check_palindrome(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	if (s[i] == s[j])
		return (1);
	return (check_palindrome(s, --i, --j));
}
