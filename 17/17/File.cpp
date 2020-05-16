#include "File.h"
#include <iostream>
#include <fstream>
using namespace std;

void output()
{
	ifstream fin("DVD.txt");

	if (!fin.is_open())
	{
		cout << "Файл не был открыт" << endl;
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
		cout << "Файл не был открыт" << endl;
	}

	else
	{
		if (first)
		{
			for (int i = 0; i < size; i++)
			{
				/*cout << "Введите название фильма ";
				cin >> mas[i].title;
				f << "\n" << "Фильм номер " << i << "\n" << "Название: " << mas[i].title;
				*/
				//cout << "Назоваите Автора ";
				//cin >> mas[i].producer;
				//f << "\n" << "Автор: " << mas[i].producer;

				cout << "Укажите продолжительность фильма ";
				cin >> mas[i].time;
				f << "\n" << "Продолжительность (Ч) : " << mas[i].time;

				cout << "Укажите цену (Р) ";
				cin >> mas[i].price;
				f << "\n" << "Цена (Р) : " << mas[i].price;
			}
		}
		else
		{
			for (int i = 0; i < size; i++)
			{

				//f << "\n" << "Фильм номер " << i << "\n" << "Название: " << mas[i].title;
				

				//f << "\n" << "Автор: " << mas[i].producer;


				f << "\n" << "Продолжительность (Ч) : " << mas[i].time << endl;


				f << "\n" << "Цена (Р) : " << mas[i].price << endl;
			}
		}
	}

}