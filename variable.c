#include <stdio.h>
int main()
{
	int firstnumb = 35;
	char alpha = 'A';
	int second = 45;
	second += 10;
	int  sum = firstnumb + second;
	//Constant variable here
	const int notcha = 46;
	//notcha = 30;

	//printf("%d\n", firstnumb);
	printf("%d\n", second);
	//printf("%c\n", alpha);
	//printf("%d\n", firstnumb + second);
	//variable output variables
	printf("%d\n", --sum);
	printf("%d\n", firstnumb && second);
	//printf("%d\n", notcha);

	return 0;
}
