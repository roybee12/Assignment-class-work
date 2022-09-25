#include <stdio.h>
int main()
{
	int x;
	for(x = 1; x <= 20; x++){
	if (x == 16){
	continue;
	}
	if (x == 17){
		continue;
	}
	if (x == 18){
		continue;
	}
	if (x == 19){
		continue;
	}
	printf("%d\n", x);
	}
	return 0;
}
