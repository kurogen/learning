// projector_hacker_0.2b.cpp : Defines the entry point for the console application.

//��������� ��� ���������� ����� ��������� ��������� ���������

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	system("color F0"); //���� �������
	setlocale(LC_ALL, "Russian"); //�����������
	
	//���� ����������
	int value;
	float width_scrn, height_scrn, ratio_scrn, distance_proj, ratio_proj;
	double angle_w, angle_h;
	const double PI = 3.1415926535897932384626433832795;
	char restart_exit = 'y';
		
		//����� ���������
		cout << "projector_hacker 0.1b\n" << endl;
		cout << "��������� ��� ��������������\n" << endl;
		
		//���� ���������
		for (;;)
		{
			//����� ���� �������
			cout << "��� ������ ����������?\n" << endl;
			cout << "1. ���� ��������� � ������������ ��������� ��������� ���������" << endl;
			cout << "2. ������ ������������� �����������" << endl;
			cout << "3. ������������ ����������" << endl << endl;
			cin >> value;
			cout << endl;
			switch (value) {
			case 1:
				//���� ������
				cout << "����������, ������� ������! \n" << endl;
				cout << "������ �������� (�����): \a";
				cin >> width_scrn;
				cout << endl;
				cout << "������ �������� (�����): \a";
				cin >> height_scrn;
				cout << endl;
				cout << "������������ ���������� (�����): \a";
				cin >> distance_proj;
				cout << endl << endl;

				//�������
				angle_w = 180 / PI * (2 * atan(width_scrn / 2 / distance_proj));
				angle_h = 180 / PI * (2 * atan(height_scrn / 2 / distance_proj));
				ratio_proj = distance_proj / width_scrn;
				ratio_scrn = width_scrn / height_scrn;

				//����� �����������
				cout << "��������� ��������: \n" << endl;
				cout << "���� ��������� ��������� ��������� �� ������: " << angle_w << " ��������" << endl;
				cout << "���� ��������� ��������� ��������� �� ������: " << angle_h << " ��������" << endl;
				cout << "������������ ��������� ���������: " << ratio_proj << endl << endl;
				cout << "BONUS: " << endl;
				cout << "����������� ������ �������� (aspect ratio): " << ratio_scrn << endl << endl << endl << endl;
				break;
			case 2:
				cout << "������� ������� ������������� ����������� ���� � ���������� :( " << endl << endl << endl << endl;
				break;
			case 3:
				cout << "������� ������������� ���������� ���� � ���������� :( " << endl << endl << endl << endl;
				break;
			default:
				cout << "�� �� � �����! �� ��������! " << endl;
				system("PAUSE");
				return 0;
				break;
			}
			// ������� ����� if-else (������ �� case)
			/*
			if (value == 1)
			{
				cout << "����������, ������� ������! \n" << endl;

				cout << "������ �������� (�����): \a";
				cin >> width_scrn;
				cout << endl;

				cout << "������ �������� (�����): \a";
				cin >> height_scrn;
				cout << endl;

				cout << "������������ ���������� (�����): \a";
				cin >> distance_proj;
				cout << endl << endl;

				//�������
				angle_w = 180 / PI * (2 * atan(width_scrn / 2 / distance_proj));
				angle_h = 180 / PI * (2 * atan(height_scrn / 2 / distance_proj));
				ratio_proj = distance_proj / width_scrn;
				ratio_scrn = width_scrn / height_scrn;

				//����� �����������
				cout << "��������� ��������: \n" << endl;
				cout << "���� ��������� ��������� ��������� �� ������: " << angle_w << " ��������" << endl;
				cout << "���� ��������� ��������� ��������� �� ������: " << angle_h << " ��������" << endl;
				cout << "������������ ��������� ���������: " << ratio_proj << endl;
				cout << endl;
				cout << "BONUS: " << endl;
				cout << "����������� ������ �������� (aspect ratio): " << ratio_scrn << endl;
				cout << endl << endl;
			}

			else if (value == 2)
			{
				cout << "������� ������� ������������� ����������� ���� � ���������� :( " << endl;
				cout << endl << endl;
			}

			else if (value == 3)
			{
				cout << "������� ������������� ���������� ���� � ���������� :( " << endl;
				cout << endl << endl;
			}

			else
			{
				cout << "�� �� � �����! �� ��������! " << endl;
				system("PAUSE");
				return 0;
			}
		*/
			cout << "��������� ������� ������� (y) / ����� ������� (n)" << endl;
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
				cout << "�� �� ������ �����! �� ��������! " << endl;
				system("PAUSE");
				return 0;
				break;
			}
		}
	system("PAUSE");
	return 0;
}