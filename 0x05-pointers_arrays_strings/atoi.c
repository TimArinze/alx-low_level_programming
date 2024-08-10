#include <stdio.h>

int _atoi(char *s)
{
	int number = 0;
	int i = 0;
	int sign = 1;
	int numbercheck = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 47 && s[i] < 59)
		{
			numbercheck = 1;
			number = number * 10 + (s[i] - '0');
			i++;
		}
		else
		{
			if (numbercheck == 1)
				break;
			else if (s[i] == '-')
				sign = sign * (-1);
			i++;
		}
	}
	number = number * sign;
	return (number);
}
