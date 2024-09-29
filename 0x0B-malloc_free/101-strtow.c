#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - A function that splits a string into words
 * @str: the string to be splited
 * Return: a pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	char **arr;
	int string_num, _strlen, i, x, l, y;

	if (str == NULL || *str == '\0')
		return (NULL);
	string_num = count(str);
	if (string_num == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (string_num + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			str++;
			continue;
		}
		else if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			for (l = i; str[l] != ' ' && str[l] != '\0'; l++)
				;
			_strlen = l - i;
			arr[x] = malloc(_strlen + 1);
			y = 0;
			while (y < _strlen)
			{
				arr[x][y] = str[i];
				y++;
				i++;
			}
			arr[x][y] = '\0';
			x++;
		}
	}
	arr[x] = NULL;
	return (arr);
}
/**
 * count - A function that counts string
 * @str: string to be counted.
 * Return: an integer
 */
int count(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			str++;
			continue;
		}
		else if (*(str - 1) == ' ' || (str - 1) == NULL)
		{
			i++;
			str++;
		}
		else
		{
			str++;
			continue;
		}
	}
	return (i);
}
