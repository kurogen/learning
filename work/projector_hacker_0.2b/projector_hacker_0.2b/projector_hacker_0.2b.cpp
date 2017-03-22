// projector_hacker_0.2b.cpp : Defines the entry point for the console application.

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
	float width_scrn, height_scrn, ratio_scrn, distance_proj, ratio_proj;
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
			cout << "Что хотите рассчитать?\n" << endl;
			cout << "1. Углы раскрытия и проекционное отношение объектива проектора" << endl;
			cout << "2. Размер проекционного изображения" << endl;
			cout << "3. Проекционное расстояние" << endl << endl;
			cin >> value;
			cout << endl;
			switch (value) {
			case 1:
				//ввод данных
				cout << "Пожалуйста, введите данные! \n" << endl;
				cout << "Ширина проекции (метры): \a";
				cin >> width_scrn;
				cout << endl;
				cout << "Высота проекции (метры): \a";
				cin >> height_scrn;
				cout << endl;
				cout << "Проекционное расстояние (метры): \a";
				cin >> distance_proj;
				cout << endl << endl;

				//рассчет
				angle_w = 180 / PI * (2 * atan(width_scrn / 2 / distance_proj));
				angle_h = 180 / PI * (2 * atan(height_scrn / 2 / distance_proj));
				ratio_proj = distance_proj / width_scrn;
				ratio_scrn = width_scrn / height_scrn;

				//вывод результатов
				cout << "Результат расчетов: \n" << endl;
				cout << "Угол раскрытия объектива проектора по ширине: " << angle_w << " градусов" << endl;
				cout << "Угол раскрытия объектива проектора по высоте: " << angle_h << " градусов" << endl;
				cout << "Проекционное отношение объектива: " << ratio_proj << endl << endl;
				cout << "BONUS: " << endl;
				cout << "Соотношение сторон проекции (aspect ratio): " << ratio_scrn << endl << endl << endl << endl;
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
			// решение через if-else (замена на case)
			/*
			if (value == 1)
			{
				cout << "Пожалуйста, введите данные! \n" << endl;

				cout << "Ширина проекции (метры): \a";
				cin >> width_scrn;
				cout << endl;

				cout << "Высота проекции (метры): \a";
				cin >> height_scrn;
				cout << endl;

				cout << "Проекционное расстояние (метры): \a";
				cin >> distance_proj;
				cout << endl << endl;

				//рассчет
				angle_w = 180 / PI * (2 * atan(width_scrn / 2 / distance_proj));
				angle_h = 180 / PI * (2 * atan(height_scrn / 2 / distance_proj));
				ratio_proj = distance_proj / width_scrn;
				ratio_scrn = width_scrn / height_scrn;

				//вывод результатов
				cout << "Результат расчетов: \n" << endl;
				cout << "Угол раскрытия объектива проектора по ширине: " << angle_w << " градусов" << endl;
				cout << "Угол раскрытия объектива проектора по высоте: " << angle_h << " градусов" << endl;
				cout << "Проекционное отношение объектива: " << ratio_proj << endl;
				cout << endl;
				cout << "BONUS: " << endl;
				cout << "Соотношение сторон проекции (aspect ratio): " << ratio_scrn << endl;
				cout << endl << endl;
			}

			else if (value == 2)
			{
				cout << "Рассчет размера проекционного изображения пока в разработке :( " << endl;
				cout << endl << endl;
			}

			else if (value == 3)
			{
				cout << "Рассчет проекционного расстояния пока в разработке :( " << endl;
				cout << endl << endl;
			}

			else
			{
				cout << "Ну ты и дибил! До свидания! " << endl;
				system("PAUSE");
				return 0;
			}
		*/
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