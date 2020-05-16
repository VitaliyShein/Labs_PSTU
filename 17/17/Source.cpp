#include <iostream>
#include <fstream>
#include <Windows.h>
#include "File.h"
#include "Sort.h"
using namespace std;

//-----------------------------------------------//
//          Сортировка структуры фильмов         //
//-----------------------------------------------//

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Введите количество элементов ";
	cin >> size;
	DVD *mas = new DVD[size];
	input(mas, size, 1);
	output();
	int left, right;

	cout << "Введите по какому признаку вы хотите отсортировать фильмы:\n1 - По цене\n2 - По времени" << endl;
	int choice;
	cin >> choice;

	switch (choice)
	{

	case 1:
	{
		cout << "Введите диапазон (два числа, от 0 до " << size - 1 << "): ";
		cin >> left >> right;
		quickSort(left, right, mas);
		break;
	}

	case 2:
	{
		cout << "Введите диапазон ВРЕМЕНИ для сортировки фильмов(одно число(от 0 до n)) ";
		int range;
		cin >> range;
		CountingSort(mas, size, range+1);
	}

	}

	input(mas, size);
	output();
}