#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	setlocale(0, "");										// ����������� �� ���������
	int n;													// ������������� ���������� n
	printf("������� ������������ N: ");						// ������ ������������ ������ n
	scanf("%d",&n);											// ���� ������������� ������ ��������

//������� ������� for (����)

	int i; 													// ������������� �������� �����
    int sum = 0; 											// ������������� ���������� ����� �����
    	for (i = 1; i <= n; i++)							// ������ ��������� �������� �������� 1, ������������ N, ��� ����� - i+1
    	{
        	sum = sum + i;
    	}
    printf("����� ���� ����� ����� �� 1 �� N = %d\n",sum);	// ������� �� ����� ���������        
    return 0;
}
