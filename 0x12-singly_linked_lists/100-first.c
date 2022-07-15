#include <stdio.h>
#include "list.h"
void first(void) __attribute__ ((constructor));
/**
 * first_print - a function that prints a statement below
 */
void first_print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my
			back!\n");
}
