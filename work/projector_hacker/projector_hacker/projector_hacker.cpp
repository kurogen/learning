// projector_hacker.cpp : Defines the entry point for the console application.
//Программа для нахождения углов раскрытия объектива проектора

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
	cout << "Программа для вычисления углов раскрытия и\nпроекционного отношения объектива проектора\n" << endl;
	cout << "Пожалуйста, введите данные! \n" << endl;
	
	cout << "Ширина проекции: \a";
	cin >> bc;
	cout << endl;

	cout << "Высота проекции: \a";
	cin >> ab;
	cout << endl;

	cout << "Проекционное расстояние: \a";
	cin >> ho;
	cout << endl << endl;

	cout << "Результат расчетов: \n" << endl;
	cout << "Угол раскрытия объектива проектора по ширине в градусах: " << 180 / PI * (2 * atan(bc / 2 / ho)) << endl;
	cout << "Угол раскрытия объектива проектора по высоте в градусах: " << 180 / PI * (2 * atan(ab / 2 / ho)) << endl;
	cout << "Проекционное отношение объектива: " << ho/bc << endl;
	cout << endl << endl;

	system("PAUSE");
	return 0;
}