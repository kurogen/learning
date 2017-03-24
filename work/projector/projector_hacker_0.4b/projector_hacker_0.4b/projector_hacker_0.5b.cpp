// projector_hacker_0.5b.cpp : Defines the entry point for the console application.
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
	int value_1, value_2; //���������� ����
	float w_size_scrn, h_size_scrn; //���������� ������ ������
	double diagonal_scrn; //���������� ��������� ������
	float w_res_scrn, h_res_scrn; //���������� ���������� ������
	float w_size_px, h_size_px; //���������� ������ �������
	float ratio_size_scrn; //���������� ����������� ������ ������
	float distance_proj; //���������� ������������ ����������
	float ratio_proj; //���������� ������������ ��������� ���������
	double angle_w, angle_h; //���������� ���� ��������� ���������
	float area_scrn; //���������� ������� ��������
	float illum_sample; //���������� ������������ � ����� ���������� ������
	float illum_scrn; //���������� ������� �����������
	float contrast_scrn; //���������� ������������� �����������
	float bright_proj; //���������� �������� ��������� ������ ���������
	float gain_scrn; //���������� ����������� �������� (���������) ������
	const double PI = 3.1415926535897932384626433832795; //��������� ��
	char restart_exit = 'y'; //��������� yes/no
	
	//����� ���������
	cout << "projector_hacker 0.4b\n" << endl;
	cout << "��������� ��� ��������������\n" << endl;

	//���� ���������
	for (;;)
	{
		//����� ���� �������
		cout << endl;
		cout << "��� ������ ����������?\n" << endl;
		cout << "1. ���� ��������� ��������� ���������" << endl;
		cout << "2. ������ ������������� �����������" << endl;
		cout << "3. ������������ ����������" << endl << endl;
		cout << "4. ������� �����������" << endl << endl;
		cin >> value_1;
		cout << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << endl;
		cout << "����������, ������� ������! \n" << endl;
		cout << "�������� ���������� ���������: \a \n" << endl;
		cout << "1.	1024x768	/	4x3	/	XGA" << endl;
		cout << "2.	1280x720	/	16x9	/	HD_720" << endl;
		cout << "3.	1280x800	/	8x5	/	WXGA" << endl;
		cout << "4.	1440x1050	/	4x3	/	SXGA+" << endl;
		cout << "5.	1920x1080	/	16x9	/	FULLHD_1080" << endl;
		cout << "6.	1920x1200	/	8:5	/	WUXGA" << endl << endl;
		cin >> value_2;
		cout << endl;
		cout << "�� ������� ����������: ";
		switch (value_2) {
		case 1:
			w_res_scrn = 1024;								// ���-�� �������� �� ������
			h_res_scrn = 768;								// ���-�� �������� �� ������
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// ����������� ������ �������� (aspect ratio)
			cout << "1024x768 / 4x3 / XGA" << endl;
			break;
		case 2:
			w_res_scrn = 1280;								// ���-�� �������� �� ������
			h_res_scrn = 720;								// ���-�� �������� �� ������
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// ����������� ������ �������� (aspect ratio)
			cout << "1280x720 / 16x9 / HD720" << endl;
			break;
		case 3:
			w_res_scrn = 1280;								// ���-�� �������� �� ������
			h_res_scrn = 800;								// ���-�� �������� �� ������
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// ����������� ������ �������� (aspect ratio)
			cout << "1280x800 / 8x5 / WXGA" << endl;
			break;
		case 4:
			w_res_scrn = 1440;								// ���-�� �������� �� ������
			h_res_scrn = 1050;								// ���-�� �������� �� ������
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// ����������� ������ �������� (aspect ratio)
			cout << "1440x1050 / 4x3 / SXGA+" << endl;
			break;
		case 5:
			w_res_scrn = 1920;								// ���-�� �������� �� ������
			h_res_scrn = 1080;								// ���-�� �������� �� ������
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// ����������� ������ �������� (aspect ratio)
			cout << "1920x1080 / 16x9 / FULLHD_1080" << endl;
			break;
		case 6:
			w_res_scrn = 1920;								// ���-�� �������� �� ������
			h_res_scrn = 1200;								// ���-�� �������� �� ������
			ratio_size_scrn = w_res_scrn / h_res_scrn;		// ����������� ������ �������� (aspect ratio)
			cout << "1920x1200 / 8:5 / WUXGA" << endl;
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
			ratio_proj = distance_proj / w_size_scrn;							// ������������ ��������� ��������� �� ������
			diagonal_scrn = sqrt (pow(w_size_scrn, 2) + pow(h_size_scrn, 2));	// ��������� ������
			area_scrn = w_size_scrn * h_size_scrn;								// ������� ������
			w_size_px = w_size_scrn / w_res_scrn * 1000;						// ������ �������
			
			//����� �����������
			cout << endl;
			cout << "��������� ��������: " << endl;
			cout << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_w << " �������" << endl;
			cout << "���� ��������� ��������� ��������� �� ������: " << angle_h << " �������" << endl;
			cout << endl;
			cout << "������������ ��������� ���������: " << ratio_proj << ":1" << endl;
			cout << "��������� ��������: " << diagonal_scrn << " �����" << endl;
			cout << "������� ��������: " << area_scrn << " ���������� �����" << endl;
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
			h_size_scrn = w_size_scrn / ratio_size_scrn;

			//������� �������������� ����������
			angle_w = 180 / PI * (2 * atan(w_size_scrn / 2 / distance_proj));	// ���� ��������� ��������� �� ������
			angle_h = 180 / PI * (2 * atan(h_size_scrn / 2 / distance_proj));	// ���� ��������� ��������� �� ������
			diagonal_scrn = sqrt(pow(w_size_scrn, 2) + pow(h_size_scrn, 2));	// ��������� ������
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
			cout << "��������� ��������: " << diagonal_scrn << " �����" << endl;
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
			diagonal_scrn = sqrt(pow(w_size_scrn, 2) + pow(h_size_scrn, 2));	// ��������� ������
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
			cout << "��������� ��������: " << diagonal_scrn << " �����" << endl;
			cout << "������� ��������: " << area_scrn << " ���������� �����" << endl;
			cout << "������ �������: " << w_size_px << " ����������" << endl << endl << endl << endl;
			
			break;
		case 4:
			//���� ������ 4
			cout << "����������, ������� ������! \n" << endl;

			//area_scrn; //������� ��������
			//illum_sample; //������������ � ����� ���������� ������
			//illum_scrn; //������� �����������
			//contrast_scrn; //������������� �����������
			//bright_proj; //�������� ��������� ������ ���������
			//gain_scrn; //����������� �������� (���������) ������

			cout << "������ �������� (�����): \a";
			cin >> w_size_scrn;
			cout << endl;
			cout << "������ �������� (�����): \a";
			cin >> h_size_scrn;
			cout << endl;

			/*
			cout << "������������ � ����� ���������� ������ (����)";
			cout << "HELP \n";
			cout << "�������� ����������� (��� ����������� ��� ��������) ������� �������� ������������ ������ ��� ����������� ��������� \n";
			cout << "������� �������� ������������ \n";
			cout << "��������� ����: 0,0003 ���� \n";
			cout << "���������� � ����� ������: 0,27 ���� \n";
			cout << "����� �������(������������� ���������): 50 ���� \n";
			cout << "����� ��������� ����: 100 ���� \n";
			cout << "������� �������: 320 - 500 ���� \n";
			cout << "������ ��� ����� � ����� ����: 400 ���� \n";
			cout << "��������� ����: 1000 ���� \n";
			cout << "����� ��������� ����(� ����): 10000 - 25000 ���� \n";
			cout << "��� ������ �������: 32000 - 130000 ���� \n";
			cout << endl;
			*/
			cout << "������������ � ����� ���������� ������ (����): \a";
			cin >> illum_sample;
			cout << endl;
			/*
			cout << "������������� �����������: \a";
			cout << "HELP \n";
			cout << "������� �������� �������������: \n";
			cout << "����������� ������������� 5:1 \n";
			cout << "����������� ������������� 10:1 \n";
			cout << "���������� ������������� 10:1 \n";
			cout << endl;
			*/
			cout << "������������� �����������: \a";
			cin >> contrast_scrn;
			cout << endl;
			cout << "--------------------------------------------------------------" << endl;

			//������� 4. ������� �����������
			area_scrn = w_size_scrn * h_size_scrn;										// ������� ������
			illum_scrn = ((illum_sample * contrast_scrn) - illum_sample) * area_scrn
			
			//������� �������������� ����������
			
			diagonal_scrn = sqrt(pow(w_size_scrn, 2) + pow(h_size_scrn, 2));			// ��������� ������
			w_size_px = w_size_scrn / w_res_scrn * 1000;								// ������ �������

			//����� �����������
			cout << endl;
			cout << "��������� ��������: " << endl;
			cout << endl;
			cout << "������� �����������: " << illum_scrn << " ����" << endl;
			cout << endl;
			cout << "��������� ��������: " << diagonal_scrn << " �����" << endl;
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