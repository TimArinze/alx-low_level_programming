#include "main.h"
/**
 * main - prints _putchar, followed by newline
 *
 * Returns: 0 (Success)
 */

int main(void)
{
	char *word = "_putchar\n";
	while (word != "\0")
	{
		_putchar(*word);
		++word;
	}
	return (0);
}
