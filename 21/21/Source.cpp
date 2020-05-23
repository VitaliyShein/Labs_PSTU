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

	// Работа с классом Triad
	Triad a;
	cout << a;
	Triad b(9, 5, 2);
	a = b;
	cout << a;

	// Работа с классом Time (Класс выписывает секунды, минуты и часы в обратном порядке)
	Time k;
	cout << "Введите начало отсчёта" << endl;
	cin >> k;
	cout << k;

	f1(k);
	a = f2();
	cout << a;

	int choice;
	do
	{
		cout << "Введите 1, чтобы запустить часы" << endl;
		cout << "Введите 2, чтобы настроить время" << endl;
		cout << "Введите 3, чтобы остановить работу программы" << endl;
		
		cin >> choice;


		switch (choice)
		{
		case 1:
		{
			int start = clock();

			while (!_kbhit()) // часы
			{
				int now = clock();

				if (((now - start) / CLOCKS_PER_SEC) >= 1)
				{
					system("cls");
					cout << "Нажмите любую клавишу, чтобы вернуться" << endl;
					cout << k;
					k.IncreaseFirst();
					start = now;
				}
			}
			break;
		}

		case 2:
		{
			cout << "Выберите вариант изменения:" << endl;
			cout << "1) Увеличить время" << endl;
			cout << "2) Задать новое время" << endl;
			int choice_2;
			cin >> choice_2;

			switch (choice_2)
			{
			case 1:
			{
				int first, second;
				cout << "Введите секунды и минуты через пробел"<< endl;
				cin >> first >> second;
				k.IncreaseMinSec(first, second);
				break;
			}
			case 2:
			{
				int first, second, third;
				cout << "Введите секунды затем минуты и часы через пробел" << endl;
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