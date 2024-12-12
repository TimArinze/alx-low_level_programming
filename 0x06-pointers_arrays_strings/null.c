#include <stdio.h>

int main()
{
	char *s1 = "";
	char *s2 = NULL;

	printf("The size of '' is %ld\n", sizeof(*s2));
	printf("The size of NULL is %ld\n", sizeof(*s1));

	s1 = "first";
	s2 = "second";

	printf("The value of "" is %s\n", s2);
	printf("The value of "" is %s\n", s2);
}
