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

	List<int> in(5, 0); // (���������� ���������, ����� ������� ����������� ���� ������)
	List<float> fl(6, 1); // (���������� ���������, ����� ������� ����������� ���� ������)
	List<double> db(7, 2); // (���������� ���������, ����� ������� ����������� ���� ������)

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

	cout <<"����� ������ ��������� ������� ����� "<< in[0] + fl[0] +db[0] << endl;

	cout << "������ ������� " << in() << endl;

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