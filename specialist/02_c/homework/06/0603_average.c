//	http://mathus.ru/math/srednie.pdf

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void average(float a, float b, float *c, float*d)
{
	*c=(a+b)/2;	
	*d=sqrt(a*b);
}

int main()																		// здесь ошибка
{
	float a, b, c, d;
	
	printf("Введите число a\na = ");
	scanf("%f",&a);
	printf("Введите число b\nb = ");
	scanf("%f",&b);
	
	average(a,b,&c,&d);
	printf("Среднее арифметическое чисел %.2f и %.2f равно %.2f\n", a, b, c);			// среднее арифметическое чисел a и b
	printf("Среднее геометрическое чисел %.2f и %.2f равно %.2f\n", a, b, d);			// среднее геометрическое чисел a и b

	return 0;
}