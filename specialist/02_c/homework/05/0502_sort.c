#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void bubble(int m[], int);

int main()
{
	int m[MAX_SIZE];
	int i;																		
	int n;
	
// Ввод данных массива
	
	printf("n? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("m[%d]? ",i);
		scanf("%d",&m[i]);
	}

// Вызов функции сортировки

	bubble(m,n);
	
// Вывод отсортированного массива

	for(i=0;i<n;i++)
	{
		printf("%d --> ", m[i]);
	}
	
	return 0;
}

// Функция алгоритма сортировки массива методом "пузырька"
	
void bubble(int m[], int n)
{
	int i,j;
	int tmp;							// временная переменная для обмена элементов местами
	
	for (int i=n-1; i>=0; i--)
	{
		for (int j=0; j<i; j++)
	    {
			if (m[j] > m[j+1])
			{
				tmp = m[j];
				m[j] = m[j+1];
				m[j+1] = tmp;
    		}
		}
	}
}