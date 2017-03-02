#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c;
	printf("b, c? ");
	scanf("%f %f",&b,&c);
	//if(c=0) printf("/ by 0\n");
	if(c==0) printf("/ by 0\n");
	else
	{
		a=b/c;
		printf("a = %.1f\n",a);
	}
	
	return 0;
}