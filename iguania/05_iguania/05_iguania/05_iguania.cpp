// 05_iguania.cpp : Defines the entry point for the console application.
//Программа, которая просит от пользователя ввести три числа, и затем печатает их сумму и произведение

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c;

	cout << "Введите три числа\n";
	cin >> a >> b >> c;

	cout << "Сумма равна " << a + b + c << endl;
	cout << "Произведение равно " << a * b * c << endl;

	system("PAUSE");
	return 0;
}