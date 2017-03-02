//04_iguania.cpp
//Программа, которая просит от пользователя ввести два числа, а потом печатает результаты вычислений, а именно: сумму, разность, произведение и частное

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;

	cout << "Введите два числа\n";
	cin >> a >> b;

	cout << "Сумма " << a << " и " << b << " равна " << a + b << endl;
	cout << "Разность " << a << " и " << b << " равна " << a - b << endl;
	cout << "Произведение " << a << " и " << b << " равно " << a * b << endl;
	cout << "Частное " << a << " и " << b << " равно " << a / b << endl;

	system("PAUSE");
	return 0;
}