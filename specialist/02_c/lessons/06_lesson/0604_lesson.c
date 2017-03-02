//Вычислить сумму элементов массива, используя вспомогательные функции

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

float ArraySum(float[],int);

int main(int argc, char *argv[])
{
	float m[MAX_SIZE];
	int i,n;
	printf("n? ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("m[%d]? ",i);
		scanf("%f",&m[i]);
	}
	//--------------------------------------------------------------------------
	printf("Summa = %.2f\n",ArraySum(m,n));
	return 0;
}

float ArraySum(float m[],int n)
{
	float s=.0;
	int i;
	for(i=0;i<n;i++)
	{
		s+=m[i];
	}
	return 0;
}