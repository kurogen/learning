#include <stdio.h>
#include <stdlib.h>

int Sum(int *a,int *b)
{
	*a=10;
	*b=20;
	return *a+*b;
}

int main()
{
	int s,a,b;
	//a=1;
	//b=2;
	s=Sum(&a,&b);
	
	printf("%d + %d = %d\n",a,b,s);
	
	return 0;
}