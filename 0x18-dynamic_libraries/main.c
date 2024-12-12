#include <stdio.h>

int main(void)
{
	int a, b;

	a = add(5, 5);
	b = sub(5, 3);

	printf("5 + 5 = %d\n", a);
	printf("5 - 3 = %d\n", b);

	return 0;
}
