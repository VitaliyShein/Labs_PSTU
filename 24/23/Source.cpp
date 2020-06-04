#include <iostream>
#include "List.h"
#include "Money.h"
#include <Windows.h>
#include <conio.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	List<int> in(5, 0); // (количество элементов, число которым заполняется весь список)
	List<float> fl(6, 1); // (количество элементов, число которым заполняется весь список)
	List<double> db(7, 2); // (количество элементов, число которым заполняется весь список)

	for (int i = 0; i < in(); i++)
	{
		cout << in[i] << " ";
	}

	cout << endl << endl;

	for (int i = 0; i < fl(); i++)
	{
		cout << fl[i] << " ";
	}

	cout << endl << endl;

	for (int i = 0; i < db(); i++)
	{
		cout << db[i] << " ";
	}

	cout << endl << endl;

	for (int i = 0; i < in(); i++)
	{
		cout << in[i] << " ";
	}

	

	cout << endl << endl;

	cout <<"Сумма первых элементов списков равна "<< in[0] + fl[0] +db[0] << endl;

	cout << "Размер массива " << in() << endl;

	Money F;
	cin >> F;
	cout << F;
	cout << endl;
	Money L;
	cin >> L;
	cout << L;
	cout << endl;
	Money FL;
	FL = F - L;
	cout << FL;
	cout << endl;



	List<Money> one();
}