/*
Циклически сдвинуть элементы массива на одну позицию вправо
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void arrayRight(int m[],int);

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
	
// Вывод заданного массива	
	printf("\nЗаданный массив:\n");
	for(i=0;i<n;i++)
	{
		printf("\%d --> ", m[i]);
	}

// Вызов функции циклического сдвига вправо
	arrayRight(m,n);
	
// Вывод сдвинутого массива
	printf("\nСдвинутый массив:\n");
	for(i=0;i<n;i++)
	{
		printf("\%d --> ", m[i]);
	}
	return 0;
}

// Функция смещения элементов на одну позицию вправо
void arrayRight(int m[], int n)
{
    int tmp = m[n-1];
    while (n > 0)
    m[--n] = m[n-1];
    m[0] = tmp;
}