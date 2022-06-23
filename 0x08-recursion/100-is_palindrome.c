#include "main.h"
/**
 * is_palindrome - A function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: the string
 * Return: int
 */
int is_palindrome(char *s)
{
	int j;

	j = len(s) - 1;
	return (check(s, 0, j, j % 2));
}
/**
 * len - function
 * @s: string
 * Return: int
 */
int len(char *s)
{
	int n = 0;

	if (*s > '\0')
	n = n + len(s + 1);
	return (n);
/**
 * check - function
 * @s: string
 * @i: interger
 * @j: interger
 * Return: int
 */
int check(char *s, int i, int j, int pair)
{
	if ((s[i] == s[j] && pair != 0) || (i == j + 1 && pair == 0))
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (check(s, i + 1, j - 1, pair));
}
