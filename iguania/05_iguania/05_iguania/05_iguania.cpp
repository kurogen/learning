// 05_iguania.cpp : Defines the entry point for the console application.
//���������, ������� ������ �� ������������ ������ ��� �����, � ����� �������� �� ����� � ������������

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c;

	cout << "������� ��� �����\n";
	cin >> a >> b >> c;

	cout << "����� ����� " << a + b + c << endl;
	cout << "������������ ����� " << a * b * c << endl;

	system("PAUSE");
	return 0;
}