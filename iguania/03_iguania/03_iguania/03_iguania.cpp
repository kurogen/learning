//Сложение двух чисел
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int chislo1;
	int chislo2;
	int summa;

	cout << "Vvedite pervoe chislo: " << endl;
	cin >> chislo1;
	cout << "Vvedite vtoroe chislo: " << endl;
	cin >> chislo2;

	summa = chislo1 + chislo2;
	cout << "Summa ravna: " << summa << endl;
	
	system("PAUSE");
	return 0;
}