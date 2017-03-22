// projector_hacker_0.3b.cpp : Defines the entry point for the console application.

//Программа для нахождения углов раскрытия объектива проектора

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	system("color F0"); //цвет консоли
	setlocale(LC_ALL, "Russian"); //локализация

								  //ввод переменных
	int value;
	float w_size_scrn, h_size_scrn, w_res_scrn, h_res_scrn, w_size_px, h_size_px, ratio_scrn, distance_proj, ratio_proj;
	double angle_w, angle_h;
	const double PI = 3.1415926535897932384626433832795;
	char restart_exit = 'y';

	//старт программы
	cout << "projector_hacker 0.1b\n" << endl;
	cout << "Программа для видеоинженеров\n" << endl;

	//цикл программы
	for (;;)
	{
		//выбор типа расчета
		cout << endl;
		cout << "Что хотите рассчитать?\n" << endl;
		cout << "1. Углы раскрытия и проекционное отношение объектива проектора" << endl;
		cout << "2. Размер проекционного изображения" << endl;
		cout << "3. Проекционное расстояние" << endl << endl;
		cin >> value;
		cout << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << endl;
		switch (value) {
		case 1:
			//ввод данных
			cout << "Пожалуйста, введите данные! \n" << endl;
			cout << "Ширина проекции (метры): \a";
			cin >> w_size_scrn;
			cout << endl;
			cout << "Высота проекции (метры): \a";
			cin >> h_size_scrn;
			cout << endl;
			cout << "Разрешение проекции по ширине (пиксели): \a";
			cin >> w_res_scrn;
			cout << endl;
			cout << "Разрешение проекции по высоте (пиксели): \a";
			cin >> h_res_scrn;
			cout << endl;
			cout << "Проекционное расстояние (метры): \a";
			cin >> distance_proj;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//рассчет
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));
			ratio_proj = distance_proj / w_size_scrn;
			ratio_scrn = w_size_scrn / h_size_scrn;
			w_size_px = w_size_scrn / w_res_scrn * 1000;	// формула нахождения размера пикселя по ширине
			h_size_px = h_size_scrn / h_res_scrn* 1000;	// формула нахождения размера пикселя по ширине

			//вывод результатов
			cout << endl;
			cout << "Результат расчетов: \n" << endl;
			cout << "Угол раскрытия объектива проектора по ширине: " << angle_w << " градусов" << endl;
			cout << "Угол раскрытия объектива проектора по высоте: " << angle_h << " градусов" << endl;
			cout << "Проекционное отношение объектива: " << ratio_proj << endl << endl;
			cout << "Соотношение сторон проекции (aspect ratio): " << ratio_scrn << endl;
			cout << "Размер пикселя по ширине: " << w_size_px << " миллиметров" << endl;
			cout << "Размер пикселя по высоте: " << h_size_px << " миллиметров" << endl << endl << endl << endl;
			
			/*
			cout << "Размера пикселя: " << w_size_px << "/" << h_size_px << endl << endl << endl << endl;
			*/

			break;
		case 2:
			cout << "Рассчет размера проекционного изображения пока в разработке :( " << endl << endl << endl << endl;
			break;
		case 3:
			cout << "Рассчет проекционного расстояния пока в разработке :( " << endl << endl << endl << endl;
			break;
		default:
			cout << "Ну ты и дибил! До свидания! " << endl;
			system("PAUSE");
			return 0;
			break;
		}
		cout << "--------------------------------------------------------------" << endl;
		cout << "Повторить рассчет нажмите (y) / Выйти нажмите (n)" << endl;
		cin >> restart_exit;
		switch (restart_exit) {
		case 'y':
			system("cls");
			break;
		case 'n':
			system("PAUSE");
			return 0;
			break;
		default:
			cout << "Ну ты вообще дибил! До свидания! " << endl;
			system("PAUSE");
			return 0;
			break;
		}
	}
	system("PAUSE");
	return 0;
}