// test_yes_no.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	char yes = 'y';
	cin >> yes;

if (yes == 'y')
{
	cout << "yes!" << endl;
}

else
{
	cout << "no!" << endl;
	system("PAUSE");
	return 0;
}

system("PAUSE");
return 0;
}

