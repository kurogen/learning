//04_iguania.cpp
//���������, ������� ������ �� ������������ ������ ��� �����, � ����� �������� ���������� ����������, � ������: �����, ��������, ������������ � �������

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;

	cout << "������� ��� �����\n";
	cin >> a >> b;

	cout << "����� " << a << " � " << b << " ����� " << a + b << endl;
	cout << "�������� " << a << " � " << b << " ����� " << a - b << endl;
	cout << "������������ " << a << " � " << b << " ����� " << a * b << endl;
	cout << "������� " << a << " � " << b << " ����� " << a / b << endl;

	system("PAUSE");
	return 0;
}