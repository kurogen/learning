#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int *b;
	a = 10;
	printf("%d %p\n", a, &a);
	b = &a;
	printf("%d %p\n", *b, b);
	//*b = 5;
	
	//scanf("%d,.....");
	
	
	printf("%d %p\n", a, &a);
	//a = 5;
	return 0;
}