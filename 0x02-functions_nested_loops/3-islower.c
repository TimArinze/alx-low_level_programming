#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @c: function argument
 *
 * Return: return 1 if it is lowercase character otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
