#include "File.h"	
#include "Money.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	Money m, m1, m2, m3;
	int n, k, c, kol;
	char file_name[30];
	do
	{
		cout << "\n1. �������� ����";
		cout << "\n2. ������ �����";
		cout << "\n3. ������� ������ �� �����";
		cout << "\n4. �������� ������ � �����";
		cout << "\n5. �������� ������ � �����";
		cout << "\n6. ������� ������� �� �����, ������� ������ ��������� ��������";
		cout << "\n7. ��������� ��� ������ � �������� ��������� � ��� ����";
		cout << "\n8. �������� K ������� ����� ������ � ������� N";
		cout << "\n0. �����\n";
		cin >> c;
		switch (c)
		{
		case 1: cout << "�������� �����? "; cin >> file_name;
			k = make_file(file_name);
			if (k < 0) cout << "������ ������� ����\n";
			break;

		case 2:
			cout << "�������� �����? "; cin >> file_name;
			k = print_file(file_name);
			if (k == 0) cout << "���� ������\n";
			if (k < 0) cout << "������ ������� ����\n";
			break;
		case 3:
			cout << "�������� �����? "; cin >> file_name;
			int nom; cout << "�����? "; cin >> nom;
			k = del_file(file_name, nom);
			if (k < 0) cout << "������ ������� ����\n";
			break;
		case 4:
			cout << "�������� �����? "; cin >> file_name;
			cout << "�����? "; cin >> nom;
			cout << "����� ����������:\n";
			cin >> m1;
			k = add_file(file_name, nom, m1);
			if (k < 0) cout << "������ ������� ����\n";
			if (k == 0) k = add_end(file_name, m1);
			break;
		case 5:
			cout << "�������� �����? "; cin >> file_name;
			cout << "�����? "; cin >> nom;
			cout << "����� ����������:\n";
			cin >> m2;
			k = chang_file(file_name, nom, m2);
			if (k < 0) cout << "������ ������� ����\n";
			if (k == 0) cout << "��� ����� ������\n";
			break;
		case 6:
			cout << "�������� �����? "; cin >> file_name;
			cout << "������� �������� ����������� ����������\n";
			cin >> m;
			k = del_bolshe(file_name, m);
			if (k < 0) cout << "������ ������� ����\n";
			if (k == 0) cout << "��� ����� ������\n";
			break;
		case 7:
			cout << "�������� �����? "; cin >> file_name;
			cout << "������� �������� ����������\n";
			cin >> m3;
			k = doubleDecrease(file_name, m3);
			if (k < 0) cout << "������ ������� ����\n";
			if (k == 0) cout << "��� ����� ������\n";
			break;
		case 8:
			cout << "�������� �����? "; cin >> file_name;
			cout << "������� ����� ��������\n";
			cin >> n;
			cout << "������� ���������� ���������\n";
			cin >> kol;
			k = add_more(file_name, kol, n);
			if (k < 0) cout << "������ ������� ����\n";
			if (k == 0) cout << "��� ����� ������\n";
			break;
		}
	} while (c != 0);
	system("pause");
}