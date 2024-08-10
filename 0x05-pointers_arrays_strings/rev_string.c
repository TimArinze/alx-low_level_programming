#include <stdio.h>
#include "main.h"


void rev_string(char *str)
{
	char *end;
	char *start;
	char tmp;

	end = str;
	start = str;

	if (end == NULL)
		return;

	while (*end != '\0')
		end++;
	end--;

	while (start <= end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
