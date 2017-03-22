// 06_iguania.cpp : Defines the entry point for the console application.
//Программа находит значение гипотенузы прямоугольного треугольника
//Добавлена музыка

#include "stdafx.h"
#include <windows.h>
#pragma comment(lib, "winmm.lib")
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	PlaySound(L"D:/Cloud/mail_cloud/coding/github/learning/iguania/06_iguania/06_iguania/Stunt.wav", NULL, SND_FILENAME | SND_ASYNC);
	
	setlocale(LC_ALL, "Russian");

	float ab, bc;

	cout << "Введите первый катет:" << endl;
	cin >> ab;

	cout << "Введите второй катет:" << endl;
	cin >> bc;

	cout << "Гипотеуза равна: " << sqrt ((ab * ab) + (bc *bc)) << endl;

	system("PAUSE");
	return 0;
}

/*double sqrt(double x);	Данная математическая функция вычисляет и возвращает корень из положительного числа, принимая его в качестве аргумента х
double pow(double x, double y);	Возводит число, принимаемое в качестве аргумента х, в степень, принимаемую в качестве аргумента y.
double fabs(double x);	Вычисляет абсолютное значение числа х(иными словами, его модуль)
double fmod(double x, double y);	Вычисляет остаток от деления х на y.
double ceil(double x);	Вычисляет наименьшее целое, значение которого не будет меньшим, чем х.Например, функция ceil(4.68) вернет значение 5.00.
double floor(double x);	В отличии от предыдущей функции эта функция вычисляет наибольшее целое, по значению не превосходящее х.Например, функция floor(4.68) вернет значение 4.00.
double modf(double value, double *ptr);	Разбивает значение аргумента value на целую и дробные части.Целую часть функция сохраняет в объекте на который указывает указатель *ptr, а дробную возвращает.
double cos(double x);	Вычисляет косинус аргумента х, который задается в радианах
double sin(double x);	То же, но синус
double tan(double x);	То же, но тангенс
double acos(double x);	Вычисляет главное значение арккосинуса х.Аргумент х должен быть из интервала[-1; +1].Функция возвращает значение в радианах из интервала[0; p]
double asin(double x);	Вычисляет главное значение арксинуса х.Аргумент х должен быть из интервала[-1; +1].Функция возвращает значение в радианах из интервала[-p / 2; +p / 2]
double atan(double x);	Вычисляет главное значение арктангенса х.
double exp(double x);	Вычисляет значение показательной функции аргумента х.
double log(double x);	Вычисляет натуральный логарифм аргумента х.
double log10(double x);	Вычисляет десятичный логарифм аргумента х.*/