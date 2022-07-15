#include <stdio.h>
void premain(void) __attribute__((constructor));
/**
 * premain - a function that prints a statement before main
 */
void premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
