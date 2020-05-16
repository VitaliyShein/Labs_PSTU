#include <iostream>
#include <fstream>
#include <Windows.h>
#include "File.h"
#include "Sort.h"
using namespace std;

//-----------------------------------------------//
//          ���������� ��������� �������         //
//-----------------------------------------------//

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "������� ���������� ��������� ";
	cin >> size;
	DVD *mas = new DVD[size];
	input(mas, size, 1);
	output();
	int left, right;

	cout << "������� �� ������ �������� �� ������ ������������� ������:\n1 - �� ����\n2 - �� �������" << endl;
	int choice;
	cin >> choice;

	switch (choice)
	{

	case 1:
	{
		cout << "������� �������� (��� �����, �� 0 �� " << size - 1 << "): ";
		cin >> left >> right;
		quickSort(left, right, mas);
		break;
	}

	case 2:
	{
		cout << "������� �������� ������� ��� ���������� �������(���� �����(�� 0 �� n)) ";
		int range;
		cin >> range;
		CountingSort(mas, size, range+1);
	}

	}

	input(mas, size);
	output();
}