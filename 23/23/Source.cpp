#include <iostream>
#include "Container.h"
#include <Windows.h>
#include <conio.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Container list;


	list.pushfront(1).pushfront(2).pushfront(3).pushfront(4).pushfront(5);


	for (Container::Iterator iter = list.start(); iter != list.end() ; iter++)
	{
		cout << iter.get() << " ";
	}

	cout << endl << endl;

	int k = -1;

	while (k >= 4 || k <= 0)
	{
		cout << "������� ����� �������� ������� ������ ������� (�� 0 �� 3)" << endl;
		cin >> k;
	}

	cout << list[k] << endl << endl;

	cout << "������� �����, ������� ������ ��������� �� ���� ��������� ������" << endl;
	cin >> k;
	list + k;

	for (Container::Iterator iter = list.start(); iter != list.end(); iter++)
	{
		cout << iter.get() << " ";
	}

	cout << endl << endl;

	cout << "������ ������� " << list(list) << endl;
}