// 10_iguania.cpp : Defines the entry point for the console application.
//
//Операторы циклов - цикл do-while

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	
	do
	{
		cout << "Your name" << endl;
		i = i++;
	}
	
	while (i <= 20);

	system("PAUSE");
	return 0;
}