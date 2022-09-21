#include <stdio.h>
int main()
{
	int x = 15;
	float y = 20.5;
	char z = 'A';
	
	printf("%f\n", x + y);
	printf("%f\n", y - x);
	printf("%f\n", x * y);
	printf("%f\n", y / x);
	//printf("%f\n", y % x);
	printf("%d\n", ++x);
	printf("%f\n", --y);
	printf("%c\n", z);

	return 0;	
}
