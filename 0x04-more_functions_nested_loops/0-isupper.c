#include "main.h"
/**
 * _isupper - Returns 1 for uppercase and 0 for otherwise
 * @c: function argument
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= "A" && c <= "Z")
		return (1);
	else
		return (0);
}
