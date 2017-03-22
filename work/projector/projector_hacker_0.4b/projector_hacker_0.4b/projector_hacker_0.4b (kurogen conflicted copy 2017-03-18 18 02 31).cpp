// projector_hacker_0.4b.cpp : Defines the entry point for the console application.
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
	int value_1, value_2;
	float w_size_scrn, h_size_scrn, w_res_scrn, h_res_scrn, w_size_px, h_size_px, ratio_scrn, area_scrn, distance_proj, ratio_proj, ratio_px;
	double angle_w, angle_h;
	const double PI = 3.1415926535897932384626433832795;
	char restart_exit = 'y';

	//старт программы
	cout << "projector_hacker 0.4b\n" << endl;
	cout << "Программа для видеоинженеров\n" << endl;

	//цикл программы
	for (;;)
	{
		//выбор типа расчета
		cout << endl;
		cout << "
		                             __                   __                   
										 ______  _______   ____ | __ | ____    ____  _ / | _   ____  _______
										 \____ \ \_  __ \ / _ \ | | _ / __ \ _ / ___\ \   __\ / _ \ \_  __ \
										 | | _> > | | \ / (<_>) | | \  ___ / \  \___ | | (<_>) | | \ /
										 | __ / | __ | \____ / / \__ | | \___  > \___  > | __ | \____ / | __ |
										 | __ | \______ | \ / \ /
										 ___ ___     _____   _________   ____  __._____________________
										 / | \ / _  \  \_   ___ \ | | / _ | \_   _____ / \______   \
										 / ~\ / / _\  \ / \  \ / | < | __)_ | _ /
										 \    Y    //    |    \\     \____|    |  \  |        \ |    |   \    
										 \___ | _ / \____ | __ / \______ / | ____ | __ \ / _______ / | ____ | _ /
										 \ / \ / \ / \ / \ / \ /
		" << endl;
		cout << "Что хотите рассчитать?\n" << endl;
		cout << "1. Угол раскрытия объектива проектора" << endl;
		cout << "2. Размер проекционного изображения" << endl;
		cout << "3. Проекционное расстояние" << endl << endl;
		cin >> value_1;
		cout << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << endl;
		cout << "Пожалуйста, введите данные! \n" << endl;
		cout << "Выберите разрешение проектора: \a \n" << endl;
		cout << "1.	1024x768	/	4x3	/	(XGA)" << endl;
		cout << "2.	1280x720	/	16x9	/	(HD720)" << endl;
		cout << "3.	1280x800	/	8x5	/	(WXGA)" << endl;
		cout << "4.	1440x1050	/	4x3	/	(SXGA+)" << endl;
		cout << "5.	1920x1080	/	16x9	/	(FullHD1080)" << endl;
		cout << "6.	1920x1200	/	8:5	/	(WUXGA)" << endl << endl;
		cin >> value_2;
		cout << endl;
		switch (value_2) {
		case 1:
			w_res_scrn = 1024;								// кол-во пикселей по ширине
			h_res_scrn = 768;								// кол-во пикселей по высоте
			ratio_scrn = w_res_scrn / h_res_scrn;			// соотношение сторон проекции (aspect ratio)

			break;
		case 2:
			w_res_scrn = 1280;								// кол-во пикселей по ширине
			h_res_scrn = 720;								// кол-во пикселей по высоте
			ratio_scrn = w_res_scrn / h_res_scrn;			// соотношение сторон проекции (aspect ratio)

			break;
		case 3:
			w_res_scrn = 1280;								// кол-во пикселей по ширине
			h_res_scrn = 800;								// кол-во пикселей по высоте
			ratio_scrn = w_res_scrn / h_res_scrn;			// соотношение сторон проекции (aspect ratio)

			break;
		case 4:
			w_res_scrn = 1440;								// кол-во пикселей по ширине
			h_res_scrn = 1050;								// кол-во пикселей по высоте
			ratio_scrn = w_res_scrn / h_res_scrn;			// соотношение сторон проекции (aspect ratio)

			break;
		case 5:
			w_res_scrn = 1920;								// кол-во пикселей по ширине
			h_res_scrn = 1080;								// кол-во пикселей по высоте
			ratio_scrn = w_res_scrn / h_res_scrn;			// соотношение сторон проекции (aspect ratio)

			break;
		case 6:
			w_res_scrn = 1920;								// кол-во пикселей по ширине
			h_res_scrn = 1200;								// кол-во пикселей по высоте
			ratio_scrn = w_res_scrn / h_res_scrn;			// соотношение сторон проекции (aspect ratio)

			break;
		default:
			cout << "Ты дибил? До свидания! " << endl;
			system("PAUSE");
			return 0;
			break;
		}
		cout << endl;
		switch (value_1) {
		case 1:
			//ввод данных 1
			cout << "Ширина проекции (метры): \a";
			cin >> w_size_scrn;
			cout << endl;
			cout << "Высота проекции (метры): \a";
			cin >> h_size_scrn;
			cout << endl;
			cout << "Проекционное расстояние (метры): \a";
			cin >> distance_proj;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//рассчет 1. Угол раскрытия
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));

			//рассчет дополнительных параметров
			ratio_proj = distance_proj / w_size_scrn;		// проекционное отношение объектива
			area_scrn = w_size_scrn * h_size_scrn;			// площадь экрана
			w_size_px = w_size_scrn / w_res_scrn * 1000;	// ширина пикселя
			
			//вывод результатов
			cout << endl;
			cout << "Результат расчетов: " << endl;
			cout << endl;
			cout << "Угол раскрытия объектива проектора по ширине: " << angle_w << " градуса" << endl;
			cout << "Угол раскрытия объектива проектора по высоте: " << angle_h << " градуса" << endl;
			cout << endl;
			cout << "Проекционное отношение объектива: " << ratio_proj << ":1" << endl;
			cout << "Площадь проекции: " << area_scrn << " квадратных метра" << char(219) << endl;
			cout << "Ширина пикселя: " << w_size_px << " миллиметра" << endl << endl << endl << endl;
			
			break;
		case 2:
			//ввод данных 2
			cout << "Пожалуйста, введите данные! \n" << endl;
			cout << "Проекционное отношение объектива: \a";
			cin >> ratio_proj;
			cout << endl;
			cout << "Проекционное расстояние (метры): \a";
			cin >> distance_proj;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//рассчет 2. Размеры проекционного изображения
			w_size_scrn = distance_proj / ratio_proj;
			h_size_scrn = distance_proj / ratio_scrn;

			//рассчет дополнительных параметров
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));	// угол раскрытия объектива по ширине
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));	// угол раскрытия объектива по высоте
			area_scrn = w_size_scrn * h_size_scrn;								// площадь экрана
			w_size_px = w_size_scrn / w_res_scrn * 1000;						// ширина пикселя

			//вывод результатов
			cout << endl;
			cout << "Результат расчетов: " << endl;
			cout << endl;
			cout << "Размер проекционного изображения по ширине: " << w_size_scrn << " метра" << endl;
			cout << "Размер проекционного изображения по высоте: " << h_size_scrn << " метра" << endl;
			cout << endl;
			cout << "Проекционное отношение объектива: " << ratio_proj << " : 1" << endl;
			cout << "Угол раскрытия объектива проектора по ширине: " << angle_w << " градуса" << endl;
			cout << "Угол раскрытия объектива проектора по высоте: " << angle_h << " градуса" << endl;
			cout << "Площадь проекции: " << area_scrn << " квадратных метра" << endl;
			cout << "Ширина пикселя: " << w_size_px << " миллиметра" << endl << endl << endl << endl;

			break;
		case 3:
			//ввод данных 3
			cout << "Пожалуйста, введите данные! \n" << endl;
			cout << "Проекционное отношение объектива: \a";
			cin >> ratio_proj;
			cout << endl;
			cout << "Ширина проекции (метры): \a";
			cin >> w_size_scrn;
			cout << endl;
			cout << "Высота проекции (метры): \a";
			cin >> h_size_scrn;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//рассчет 3. Проекционное расстояние
			distance_proj = w_size_scrn * ratio_proj;
			//distance_proj = w_size_scrn / (2 * tan((angle_w * PI) / 360));
			
			//рассчет дополнительных параметров
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));	// угол раскрытия объектива по ширине
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));	// угол раскрытия объектива по высоте
			area_scrn = w_size_scrn * h_size_scrn;								// площадь экрана
			w_size_px = w_size_scrn / w_res_scrn * 1000;						// ширина пикселя
															
			//вывод результатов
			cout << endl;
			cout << "Результат расчетов: " << endl;
			cout << endl;
			cout << "Проекционное расстояние: " << distance_proj << " метра" << endl;
			cout << endl;
			cout << "Проекционное отношение объектива: " << ratio_proj << " : 1" << endl;
			cout << "Угол раскрытия объектива проектора по ширине: " << angle_w << " градуса" << endl;
			cout << "Угол раскрытия объектива проектора по высоте: " << angle_h << " градуса" << endl;
			cout << "Площадь проекции: " << area_scrn << " квадратных метра" << endl;
			cout << "Ширина пикселя: " << w_size_px << " миллиметра" << endl << endl << endl << endl;

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