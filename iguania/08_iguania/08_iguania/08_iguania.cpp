// 08_iguania.cpp : Defines the entry point for the console application.

//Используем оператор выбор case

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int value;

	cout << "Enter number: " << endl;
	cin >> value;

	switch (value)
	{
	case 0:
		cout << "You have entered 0" << endl;
		break;

	case 5:
		cout << "You have entered 5" << endl;
		break;

	case 21:
		cout << "You have entered 21" << endl;
		break;

	default:
		cout << "The number is not identified" << endl;
		break;
	}	

	system("PAUSE");
	return 0;
}