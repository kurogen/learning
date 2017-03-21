// projector_hacker_0.4b.cpp : Defines the entry point for the console application.
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
	int value_1, value_2;
	float w_size_scrn, h_size_scrn, w_res_scrn, h_res_scrn, w_size_px, h_size_px, ratio_scrn, area_scrn, distance_proj, ratio_proj, ratio_px;
	double angle_w, angle_h;
	const double PI = 3.1415926535897932384626433832795;
	char restart_exit = 'y';

	//����� ���������
	cout << "projector_hacker 0.4b\n" << endl;
	cout << "��������� ��� ��������������\n" << endl;

	//���� ���������
	for (;;)
	{
		//����� ���� �������
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
		cout << "��� ������ ����������?\n" << endl;
		cout << "1. ���� ��������� ��������� ���������" << endl;
		cout << "2. ������ ������������� �����������" << endl;
		cout << "3. ������������ ����������" << endl << endl;
		cin >> value_1;
		cout << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << endl;
		cout << "����������, ������� ������! \n" << endl;
		cout << "�������� ���������� ���������: \a \n" << endl;
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
			w_res_scrn = 1024;								// ���-�� �������� �� ������
			h_res_scrn = 768;								// ���-�� �������� �� ������
			ratio_scrn = w_res_scrn / h_res_scrn;			// ����������� ������ �������� (aspect ratio)

			break;
		case 2:
			w_res_scrn = 1280;								// ���-�� �������� �� ������
			h_res_scrn = 720;								// ���-�� �������� �� ������
			ratio_scrn = w_res_scrn / h_res_scrn;			// ����������� ������ �������� (aspect ratio)

			break;
		case 3:
			w_res_scrn = 1280;								// ���-�� �������� �� ������
			h_res_scrn = 800;								// ���-�� �������� �� ������
			ratio_scrn = w_res_scrn / h_res_scrn;			// ����������� ������ �������� (aspect ratio)

			break;
		case 4:
			w_res_scrn = 1440;								// ���-�� �������� �� ������
			h_res_scrn = 1050;								// ���-�� �������� �� ������
			ratio_scrn = w_res_scrn / h_res_scrn;			// ����������� ������ �������� (aspect ratio)

			break;
		case 5:
			w_res_scrn = 1920;								// ���-�� �������� �� ������
			h_res_scrn = 1080;								// ���-�� �������� �� ������
			ratio_scrn = w_res_scrn / h_res_scrn;			// ����������� ������ �������� (aspect ratio)

			break;
		case 6:
			w_res_scrn = 1920;								// ���-�� �������� �� ������
			h_res_scrn = 1200;								// ���-�� �������� �� ������
			ratio_scrn = w_res_scrn / h_res_scrn;			// ����������� ������ �������� (aspect ratio)

			break;
		default:
			cout << "�� �����? �� ��������! " << endl;
			system("PAUSE");
			return 0;
			break;
		}
		cout << endl;
		switch (value_1) {
		case 1:
			//���� ������ 1
			cout << "������ �������� (�����): \a";
			cin >> w_size_scrn;
			cout << endl;
			cout << "������ �������� (�����): \a";
			cin >> h_size_scrn;
			cout << endl;
			cout << "������������ ���������� (�����): \a";
			cin >> distance_proj;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//������� 1. ���� ���������
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));

			//������� �������������� ����������
			ratio_proj = distance_proj / w_size_scrn;		// ������������ ��������� ���������
			area_scrn = w_size_scrn * h_size_scrn;			// ������� ������
			w_size_px = w_size_scrn / w_res_scrn * 1000;	// ������ �������
			
			//����� �����������
			cout << endl;
			cout << "��������� ��������: " << endl;
			cout << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_w << " �������" << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_h << " �������" << endl;
			cout << endl;
			cout << "������������ ��������� ���������: " << ratio_proj << ":1" << endl;
			cout << "������� ��������: " << area_scrn << " ���������� �����" << char(219) << endl;
			cout << "������ �������: " << w_size_px << " ����������" << endl << endl << endl << endl;
			
			break;
		case 2:
			//���� ������ 2
			cout << "����������, ������� ������! \n" << endl;
			cout << "������������ ��������� ���������: \a";
			cin >> ratio_proj;
			cout << endl;
			cout << "������������ ���������� (�����): \a";
			cin >> distance_proj;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//������� 2. ������� ������������� �����������
			w_size_scrn = distance_proj / ratio_proj;
			h_size_scrn = distance_proj / ratio_scrn;

			//������� �������������� ����������
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));	// ���� ��������� ��������� �� ������
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));	// ���� ��������� ��������� �� ������
			area_scrn = w_size_scrn * h_size_scrn;								// ������� ������
			w_size_px = w_size_scrn / w_res_scrn * 1000;						// ������ �������

			//����� �����������
			cout << endl;
			cout << "��������� ��������: " << endl;
			cout << endl;
			cout << "������ ������������� ����������� �� ������: " << w_size_scrn << " �����" << endl;
			cout << "������ ������������� ����������� �� ������: " << h_size_scrn << " �����" << endl;
			cout << endl;
			cout << "������������ ��������� ���������: " << ratio_proj << " : 1" << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_w << " �������" << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_h << " �������" << endl;
			cout << "������� ��������: " << area_scrn << " ���������� �����" << endl;
			cout << "������ �������: " << w_size_px << " ����������" << endl << endl << endl << endl;

			break;
		case 3:
			//���� ������ 3
			cout << "����������, ������� ������! \n" << endl;
			cout << "������������ ��������� ���������: \a";
			cin >> ratio_proj;
			cout << endl;
			cout << "������ �������� (�����): \a";
			cin >> w_size_scrn;
			cout << endl;
			cout << "������ �������� (�����): \a";
			cin >> h_size_scrn;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//������� 3. ������������ ����������
			distance_proj = w_size_scrn * ratio_proj;
			//distance_proj = w_size_scrn / (2 * tan((angle_w * PI) / 360));
			
			//������� �������������� ����������
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));	// ���� ��������� ��������� �� ������
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));	// ���� ��������� ��������� �� ������
			area_scrn = w_size_scrn * h_size_scrn;								// ������� ������
			w_size_px = w_size_scrn / w_res_scrn * 1000;						// ������ �������
															
			//����� �����������
			cout << endl;
			cout << "��������� ��������: " << endl;
			cout << endl;
			cout << "������������ ����������: " << distance_proj << " �����" << endl;
			cout << endl;
			cout << "������������ ��������� ���������: " << ratio_proj << " : 1" << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_w << " �������" << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_h << " �������" << endl;
			cout << "������� ��������: " << area_scrn << " ���������� �����" << endl;
			cout << "������ �������: " << w_size_px << " ����������" << endl << endl << endl << endl;

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