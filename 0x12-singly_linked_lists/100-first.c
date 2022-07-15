#include <stdio.h>
/**
 * premain - a function that prints a statement before main
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my
			back!\n");
}
