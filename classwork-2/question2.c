#include <stdio.h>
int main()
{
	int w = 10;
	int y = 10;
	float z = 15.5;

	printf("%d\n", w == y);
	printf("%d\n", y > z);
	printf("%d\n", y < z);
	printf("%d\n", z != w);
	printf("%d\n", w >= y);
	printf("%d\n", z <= w);

	return 0;
}
