// test_exit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	char button = _getch();

	if (button == 27)
		return 0;
	else
		cout << "Again!" << endl;
		cin >> button;

	system("PAUSE");
	return 0;
}