#include <stdio.h>
/**
 * print_school - prints "school"
 * Return: nothing
 */
void print_school(void)
{
	char str[] = "Holberton";

	str[0] = 's';
	printf("%s\n", str);
}
/**
 * main - concept introduction
 *
 * Return: nothing
 */
int main(void)
{
	print_school();
	return (0);
}
