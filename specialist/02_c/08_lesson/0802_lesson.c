#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f(float a,float b, float *c, float *d)
{
	*c=(a+b)/2;
	*d=sqrt(a*b);
}

int main()
{
	float a=8,b=2,c,d;
	f(a,b,&c,&d);
	printf("c=%f d=%f\n",c,d);
	
	return 0;
}