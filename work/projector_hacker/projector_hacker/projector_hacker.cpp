// projector_hacker.cpp : Defines the entry point for the console application.
//��������� ��� ���������� ����� ��������� ��������� ���������

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float ab, bc, ho;
	const double PI = 3.1415926535897932384626433832795;

	cout << "projector_hacker 0.1b\n" << endl;
	cout << "��������� ��� ���������� ����� ��������� �\n������������� ��������� ��������� ���������\n" << endl;
	cout << "����������, ������� ������! \n" << endl;
	
	cout << "������ ��������: \a";
	cin >> bc;
	cout << endl;

	cout << "������ ��������: \a";
	cin >> ab;
	cout << endl;

	cout << "������������ ����������: \a";
	cin >> ho;
	cout << endl << endl;

	cout << "��������� ��������: \n" << endl;
	cout << "���� ��������� ��������� ��������� �� ������ � ��������: " << 180 / PI * (2 * atan(bc / 2 / ho)) << endl;
	cout << "���� ��������� ��������� ��������� �� ������ � ��������: " << 180 / PI * (2 * atan(ab / 2 / ho)) << endl;
	cout << "������������ ��������� ���������: " << ho/bc << endl;
	cout << endl << endl;

	system("PAUSE");
	return 0;
}