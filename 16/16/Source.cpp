#include <iostream>
#include <fstream>
#include <Windows.h>
#include "File.h"
#include "Search.h"
using namespace std;

//-----------------------------------------------//
//             Поиск фильма в файле              //
//-----------------------------------------------//

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Введите количество элементов ";
	cin >> size;
	DVD *mas = new DVD[size];
	mas = input(mas, size);
	output();
	search();
}