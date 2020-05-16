#include "File.h"
#include <iostream>
#include <fstream>
using namespace std;

void output()
{
	ifstream fin("DVD.txt");

	if (!fin.is_open())
	{
		cout << "���� �� ��� ������" << endl;
	}

	else
	{
		char data;
		while (fin.get(data))
		{
			cout << data;
		}
	}

	cout << endl;
}

void input(DVD* mas, int size, bool first)
{
	ofstream of("DVD.txt", ios::trunc);
	of.close();

	fstream f;
	f.open("DVD.txt");

	if (!f.is_open())
	{
		cout << "���� �� ��� ������" << endl;
	}

	else
	{
		if (first)
		{
			for (int i = 0; i < size; i++)
			{
				/*cout << "������� �������� ������ ";
				cin >> mas[i].title;
				f << "\n" << "����� ����� " << i << "\n" << "��������: " << mas[i].title;
				*/
				//cout << "��������� ������ ";
				//cin >> mas[i].producer;
				//f << "\n" << "�����: " << mas[i].producer;

				cout << "������� ����������������� ������ ";
				cin >> mas[i].time;
				f << "\n" << "����������������� (�) : " << mas[i].time;

				cout << "������� ���� (�) ";
				cin >> mas[i].price;
				f << "\n" << "���� (�) : " << mas[i].price;
			}
		}
		else
		{
			for (int i = 0; i < size; i++)
			{

				//f << "\n" << "����� ����� " << i << "\n" << "��������: " << mas[i].title;
				

				//f << "\n" << "�����: " << mas[i].producer;


				f << "\n" << "����������������� (�) : " << mas[i].time << endl;


				f << "\n" << "���� (�) : " << mas[i].price << endl;
			}
		}
	}

}