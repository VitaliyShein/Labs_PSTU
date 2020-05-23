#include <iostream>
#include <Windows.h>
#include <ctime>
#include <conio.h>
#include "Time.h"
using namespace std;

void f1(Triad& a)
{
	a.SetFirst(5);
	cout << a;
}

Triad f2()
{
	Time l(1, 2, 3);
	return l;
}



void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������ � ������� Triad
	Triad a;
	cout << a;
	Triad b(9, 5, 2);
	a = b;
	cout << a;

	// ������ � ������� Time (����� ���������� �������, ������ � ���� � �������� �������)
	Time k;
	cout << "������� ������ �������" << endl;
	cin >> k;
	cout << k;

	f1(k);
	a = f2();
	cout << a;

	int choice;
	do
	{
		cout << "������� 1, ����� ��������� ����" << endl;
		cout << "������� 2, ����� ��������� �����" << endl;
		cout << "������� 3, ����� ���������� ������ ���������" << endl;
		
		cin >> choice;


		switch (choice)
		{
		case 1:
		{
			int start = clock();

			while (!_kbhit()) // ����
			{
				int now = clock();

				if (((now - start) / CLOCKS_PER_SEC) >= 1)
				{
					system("cls");
					cout << "������� ����� �������, ����� ���������" << endl;
					cout << k;
					k.IncreaseFirst();
					start = now;
				}
			}
			break;
		}

		case 2:
		{
			cout << "�������� ������� ���������:" << endl;
			cout << "1) ��������� �����" << endl;
			cout << "2) ������ ����� �����" << endl;
			int choice_2;
			cin >> choice_2;

			switch (choice_2)
			{
			case 1:
			{
				int first, second;
				cout << "������� ������� � ������ ����� ������"<< endl;
				cin >> first >> second;
				k.IncreaseMinSec(first, second);
				break;
			}
			case 2:
			{
				int first, second, third;
				cout << "������� ������� ����� ������ � ���� ����� ������" << endl;
				cin >> first >> second >> third;
				k.Change(first, second, third);
				break;
			}
			}
			break;
		}
		}
	} while (choice!=3);
}