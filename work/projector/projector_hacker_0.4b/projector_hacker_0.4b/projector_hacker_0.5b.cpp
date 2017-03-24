// projector_hacker_0.5b.cpp : Defines the entry point for the console application.
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
	int value_1, value_2; //переменные меню
	float w_size_scrn, h_size_scrn; //переменная размер экрана
	double diagonal_scrn; //переменная диагональ экрана
	float w_res_scrn, h_res_scrn; //переменная разрешение экрана
	float w_size_px, h_size_px; //переменная размер пикселя
	float ratio_size_scrn; //переменная соотношение сторон экрана
	float distance_proj; //переменная проекционное расстояние
	float ratio_proj; //переменная проекционное отношение объектива
	double angle_w, angle_h; //переменная угол раскрытия объектива
	float area_scrn; //переменная площадь проекции
	float illum_sample; //переменная освещенность в месте размещения экрана
	float illum_scrn; //переменная яркость изображения
	float contrast_scrn; //переменная контрастность изображения
	float bright_proj; //переменная мощность светового потока проектора
	float gain_scrn; //переменная коэффициент усиления (отражения) экрана
	const double PI = 3.1415926535897932384626433832795; //константа Пи
	char restart_exit = 'y'; //переменая yes/no
	
	//старт программы
	cout << "projector_hacker 0.4b\n" << endl;
	cout << "Программа для видеоинженеров\n" << endl;

	//цикл программы
	for (;;)
	{
		//выбор типа расчета
		cout << endl;
		cout << "Что хотите рассчитать?\n" << endl;
		cout << "1. Угол раскрытия объектива проектора" << endl;
		cout << "2. Размер проекционного изображения" << endl;
		cout << "3. Проекционное расстояние" << endl << endl;
		cout << "4. Яркость изображения" << endl << endl;
		cin >> value_1;
		cout << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << endl;
		cout << "Пожалуйста, введите данные! \n" << endl;
		cout << "Выберите разрешение проектора: \a \n" << endl;
		cout << "1.	1024x768	/	4x3	/	XGA" << endl;
		cout << "2.	1280x720	/	16x9	/	HD_720" << endl;
		cout << "3.	1280x800	/	8x5	/	WXGA" << endl;
		cout << "4.	1440x1050	/	4x3	/	SXGA+" << endl;
		cout << "5.	1920x1080	/	16x9	/	FULLHD_1080" << endl;
		cout << "6.	1920x1200	/	8:5	/	WUXGA" << endl << endl;
		cin >> value_2;
		cout << endl;
		cout << "Вы выбрали разрешение: ";
		switch (value_2) {
		case 1:
			w_res_scrn = 1024;								// кол-во пикселей по ширине
			h_res_scrn = 768;								// кол-во пикселей по высоте
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// соотношение сторон проекции (aspect ratio)
			cout << "1024x768 / 4x3 / XGA" << endl;
			break;
		case 2:
			w_res_scrn = 1280;								// кол-во пикселей по ширине
			h_res_scrn = 720;								// кол-во пикселей по высоте
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// соотношение сторон проекции (aspect ratio)
			cout << "1280x720 / 16x9 / HD720" << endl;
			break;
		case 3:
			w_res_scrn = 1280;								// кол-во пикселей по ширине
			h_res_scrn = 800;								// кол-во пикселей по высоте
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// соотношение сторон проекции (aspect ratio)
			cout << "1280x800 / 8x5 / WXGA" << endl;
			break;
		case 4:
			w_res_scrn = 1440;								// кол-во пикселей по ширине
			h_res_scrn = 1050;								// кол-во пикселей по высоте
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// соотношение сторон проекции (aspect ratio)
			cout << "1440x1050 / 4x3 / SXGA+" << endl;
			break;
		case 5:
			w_res_scrn = 1920;								// кол-во пикселей по ширине
			h_res_scrn = 1080;								// кол-во пикселей по высоте
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// соотношение сторон проекции (aspect ratio)
			cout << "1920x1080 / 16x9 / FULLHD_1080" << endl;
			break;
		case 6:
			w_res_scrn = 1920;								// кол-во пикселей по ширине
			h_res_scrn = 1200;								// кол-во пикселей по высоте
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// соотношение сторон проекции (aspect ratio)
			cout << "1920x1200 / 8:5 / WUXGA" << endl;
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
			ratio_proj = distance_proj / w_size_scrn;							// проекционное отношение объектива по ширине
			diagonal_scrn = sqrt (pow(w_size_scrn, 2) + pow(h_size_scrn, 2));	// диагональ экрана
			area_scrn = w_size_scrn * h_size_scrn;								// площадь экрана
			w_size_px = w_size_scrn / w_res_scrn * 1000;						// ширина пикселя
			
			//вывод результатов
			cout << endl;
			cout << "Результат расчетов: " << endl;
			cout << endl;
			cout << "Угол раскрытия объектива проектора по ширине: " << angle_w << " градуса" << endl;
			cout << "Угол раскрытия объектива проектора по высоте: " << angle_h << " градуса" << endl;
			cout << endl;
			cout << "Проекционное отношение объектива: " << ratio_proj << ":1" << endl;
			cout << "Диагональ проекции: " << diagonal_scrn << " метра" << endl;
			cout << "Площадь проекции: " << area_scrn << " квадратных метра" << endl;
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
			h_size_scrn = w_size_scrn / ratio_size_scrn;

			//рассчет дополнительных параметров
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));	// угол раскрытия объектива по ширине
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));	// угол раскрытия объектива по высоте
			diagonal_scrn = sqrt(pow(w_size_scrn, 2) + pow(h_size_scrn, 2));	// диагональ экрана
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
			cout << "Диагональ проекции: " << diagonal_scrn << " метра" << endl;
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
			diagonal_scrn = sqrt(pow(w_size_scrn, 2) + pow(h_size_scrn, 2));	// диагональ экрана
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
			cout << "Диагональ проекции: " << diagonal_scrn << " метра" << endl;
			cout << "Площадь проекции: " << area_scrn << " квадратных метра" << endl;
			cout << "Ширина пикселя: " << w_size_px << " миллиметра" << endl << endl << endl << endl;
			
			break;
		case 4:
			//ввод данных 4
			cout << "Пожалуйста, введите данные! \n" << endl;

			//area_scrn; //площадь проекции
			//illum_sample; //освещенность в месте размещения экрана
			//illum_scrn; //яркость изображения
			//contrast_scrn; //контрастность изображения
			//bright_proj; //мощность светового потока проектора
			//gain_scrn; //коэффициент усиления (отражения) экрана

			cout << "Ширина проекции (метры): \a";
			cin >> w_size_scrn;
			cout << endl;
			cout << "Высота проекции (метры): \a";
			cin >> h_size_scrn;
			cout << endl;

			/*
			cout << "Освещенность в месте размещения экрана (люкс)";
			cout << "HELP \n";
			cout << "Замерьте люксометром (или приложением для телефона) среднее значение освещенности экрана при выключенном проекторе \n";
			cout << "Типовые значения освещённости \n";
			cout << "Безлунная ночь: 0,0003 люкс \n";
			cout << "Полнолуние в ясную погоду: 0,27 люкс \n";
			cout << "Жилая комната(искусственное освещение): 50 люкс \n";
			cout << "Очень пасмурный день: 100 люкс \n";
			cout << "Рабочий кабинет: 320 - 500 люкс \n";
			cout << "Восход или закат в ясный день: 400 люкс \n";
			cout << "Пасмурный день: 1000 люкс \n";
			cout << "Ясный солнечный день(в тени): 10000 - 25000 люкс \n";
			cout << "Под прямым солнцем: 32000 - 130000 люкс \n";
			cout << endl;
			*/
			cout << "Освещенность в месте размещения экрана (люкс): \a";
			cin >> illum_sample;
			cout << endl;
			/*
			cout << "Контрастность изображения: \a";
			cout << "HELP \n";
			cout << "Типовые значения контрастности: \n";
			cout << "Минимальная контрастность 5:1 \n";
			cout << "Оптимальная контрастность 10:1 \n";
			cout << "Избыточная контрастность 10:1 \n";
			cout << endl;
			*/
			cout << "Контрастность изображения: \a";
			cin >> contrast_scrn;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//рассчет 4. Яркость изображения
			area_scrn = w_size_scrn * h_size_scrn;										// площадь экрана
			illum_scrn = ((illum_sample * contrast_scrn) - illum_sample) * area_scrn
			
			//рассчет дополнительных параметров
			
			diagonal_scrn = sqrt(pow(w_size_scrn, 2) + pow(h_size_scrn, 2));			// диагональ экрана
			w_size_px = w_size_scrn / w_res_scrn * 1000;								// ширина пикселя

			//вывод результатов
			cout << endl;
			cout << "Результат расчетов: " << endl;
			cout << endl;
			cout << "Яркость изображения: " << illum_scrn << " люкс" << endl;
			cout << endl;
			cout << "Диагональ проекции: " << diagonal_scrn << " метра" << endl;
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