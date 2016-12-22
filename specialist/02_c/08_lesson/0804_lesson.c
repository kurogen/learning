#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f2(double x,double(*f)(double))
{
	return f(x)*f(x);
}

int main()
{
	double a;
	a=f2(25,sqrt);
	
	return 0;
}