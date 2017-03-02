#include <stdio.h>
#include <stdlib.h>

int main()
{
	int b,c;
	float a;
	printf("b? ");
	scanf("%d",&b);
	printf("c? ");
	scanf("%d",&c);
	//a=1.*b/c;
	a=(float)b/c;
	printf("%d / %d = %.2f\n",b,c,a);
	return 0;
}