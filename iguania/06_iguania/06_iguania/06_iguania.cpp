// 06_iguania.cpp : Defines the entry point for the console application.
//��������� ������� �������� ���������� �������������� ������������
//��������� ������

#include "stdafx.h"
#include <windows.h>
#pragma comment(lib, "winmm.lib")
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	PlaySound(L"D:/Cloud/mail_cloud/coding/github/learning/iguania/06_iguania/06_iguania/Stunt.wav", NULL, SND_FILENAME | SND_ASYNC);
	
	setlocale(LC_ALL, "Russian");

	float ab, bc;

	cout << "������� ������ �����:" << endl;
	cin >> ab;

	cout << "������� ������ �����:" << endl;
	cin >> bc;

	cout << "��������� �����: " << sqrt ((ab * ab) + (bc *bc)) << endl;

	system("PAUSE");
	return 0;
}

/*double sqrt(double x);	������ �������������� ������� ��������� � ���������� ������ �� �������������� �����, �������� ��� � �������� ��������� �
double pow(double x, double y);	�������� �����, ����������� � �������� ��������� �, � �������, ����������� � �������� ��������� y.
double fabs(double x);	��������� ���������� �������� ����� �(����� �������, ��� ������)
double fmod(double x, double y);	��������� ������� �� ������� � �� y.
double ceil(double x);	��������� ���������� �����, �������� �������� �� ����� �������, ��� �.��������, ������� ceil(4.68) ������ �������� 5.00.
double floor(double x);	� ������� �� ���������� ������� ��� ������� ��������� ���������� �����, �� �������� �� ������������� �.��������, ������� floor(4.68) ������ �������� 4.00.
double modf(double value, double *ptr);	��������� �������� ��������� value �� ����� � ������� �����.����� ����� ������� ��������� � ������� �� ������� ��������� ��������� *ptr, � ������� ����������.
double cos(double x);	��������� ������� ��������� �, ������� �������� � ��������
double sin(double x);	�� ��, �� �����
double tan(double x);	�� ��, �� �������
double acos(double x);	��������� ������� �������� ����������� �.�������� � ������ ���� �� ���������[-1; +1].������� ���������� �������� � �������� �� ���������[0; p]
double asin(double x);	��������� ������� �������� ��������� �.�������� � ������ ���� �� ���������[-1; +1].������� ���������� �������� � �������� �� ���������[-p / 2; +p / 2]
double atan(double x);	��������� ������� �������� ����������� �.
double exp(double x);	��������� �������� ������������� ������� ��������� �.
double log(double x);	��������� ����������� �������� ��������� �.
double log10(double x);	��������� ���������� �������� ��������� �.*/