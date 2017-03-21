// 07_iguania.cpp : Defines the entry point for the console application.

//Используем условный оператор if - else if

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int value;

	cout << "Enter number: " << endl;
	cin >> value;

	if (value > 0)
	{
		cout << "Number positive" << endl;
		cout << "You have entered number: " << value << endl;

		if (value >= 100)
			cout << "This number is more or equally 100" << endl;

		else
			cout << "This number is less 100" << endl;

	}
	else if (value == 0)
	{
		cout << "The number is not neither positive, nor negative" << endl;
		cout << "You have entered number: " << value << endl;
	}
	else
	{
		cout << "Number negative" << endl;
		cout << "You have entered number: " << value << endl;

		if (value >= -100)
			cout << "This number is more or equally -100" << endl;

		else
			cout << "This number is less -100" << endl;

	}

	system("PAUSE");
	return 0;
}