// projector_hacker_0.3b.cpp : Defines the entry point for the console application.

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
	float w_size_scrn, h_size_scrn, w_res_scrn, h_res_scrn, w_size_px, h_size_px, ratio_scrn, distance_proj, ratio_proj;
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
		cout << endl;
		cout << "��� ������ ����������?\n" << endl;
		cout << "1. ���� ��������� � ������������ ��������� ��������� ���������" << endl;
		cout << "2. ������ ������������� �����������" << endl;
		cout << "3. ������������ ����������" << endl << endl;
		cin >> value;
		cout << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << endl;
		switch (value) {
		case 1:
			//���� ������
			cout << "����������, ������� ������! \n" << endl;
			cout << "������ �������� (�����): \a";
			cin >> w_size_scrn;
			cout << endl;
			cout << "������ �������� (�����): \a";
			cin >> h_size_scrn;
			cout << endl;
			cout << "���������� �������� �� ������ (�������): \a";
			cin >> w_res_scrn;
			cout << endl;
			cout << "���������� �������� �� ������ (�������): \a";
			cin >> h_res_scrn;
			cout << endl;
			cout << "������������ ���������� (�����): \a";
			cin >> distance_proj;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//�������
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));
			ratio_proj = distance_proj / w_size_scrn;
			ratio_scrn = w_size_scrn / h_size_scrn;
			w_size_px = w_size_scrn / w_res_scrn * 1000;	// ������� ���������� ������� ������� �� ������
			h_size_px = h_size_scrn / h_res_scrn* 1000;	// ������� ���������� ������� ������� �� ������

			//����� �����������
			cout << endl;
			cout << "��������� ��������: \n" << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_w << " ��������" << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_h << " ��������" << endl;
			cout << "������������ ��������� ���������: " << ratio_proj << endl << endl;
			cout << "����������� ������ �������� (aspect ratio): " << ratio_scrn << endl;
			cout << "������ ������� �� ������: " << w_size_px << " �����������" << endl;
			cout << "������ ������� �� ������: " << h_size_px << " �����������" << endl << endl << endl << endl;
			
			/*
			cout << "������� �������: " << w_size_px << "/" << h_size_px << endl << endl << endl << endl;
			*/

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
		cout << "--------------------------------------------------------------" << endl;
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