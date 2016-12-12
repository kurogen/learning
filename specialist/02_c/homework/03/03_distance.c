#include <stdio.h>
#include <math.h>

int main()
{
	float d,x1,y1,x2,y2;
	printf("Необходимо найти расстояние между двумя точками\nФормула рассчета:\nd = sqrt ( pow ((x2-x1),2) + pow ((y2-y1),2) )\n\vВведите координаты точек\n\v");
	
	printf("Координата первой точки - x1?\n");
	scanf("%f",&x1);
	printf("Координата первой точки - y1?\n");
	scanf("%f",&y1);
	printf("Координата второй точки - x2?\n");
	scanf("%f",&x2);
	printf("Координата второй точки - y2?\n");
	scanf("%f",&y2);
	
	d = sqrt ( pow ((x2-x1),2) + pow ((y2-y1),2) );
	
	printf("d = sqrt ( pow ((%.1f-%.1f),2) + pow ((%.1f-%.1f),2) ) = %.1f\n",x2,x1,y2,y1,d);
	return 0;
}