#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
	double x,y;	
};


int main()
{
	struct point p1,p2;
	double distance;
	printf("point 1?\n");
	scanf("%lf %lf",&p1.x,&p1.y);
	printf("point 2?\n");
	scanf("%lf %lf",&p2.x,&p2.y);
	distance=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	printf("Distance = %lf\n", distance);
	
	return 0;
}