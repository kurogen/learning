#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,d,e;
	
	printf("Необходимо найти a!\nФормула рассчета:\na = sqrt(b) + (pow(c,d) / e)\n\v");
	
	printf("Чему равно b?\n");
	scanf("%f",&b);
	printf("Чему равно c?\n");
	scanf("%f",&c);
	printf("Чему равно d?\n");
	scanf("%f",&d);
	printf("Чему равно e?\n");
	scanf("%f",&e);
	
	a = sqrt(b) + (pow(c, d) / e);
	
	printf("a = sqrt(%f) + (pow(%f, %f) / %f) = %f\n",b,c,d,e,a);
	
	return 0;
}
