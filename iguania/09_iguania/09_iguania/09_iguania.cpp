// 09_iguania.cpp : Defines the entry point for the console application.
//
//Операторы циклов - цикл while

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	while (i <= 20)
	{
		cout << "Your name" << endl;
		i = i++;
	}

	system("PAUSE");
	return 0;
}