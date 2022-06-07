#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: function argument.
 *
 * Returns: 1 if it is alphabetic and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
