#include <iostream>
#include <string>
#include <Windows.h>
#include "Employee.h"
using namespace std;



Car& DestroyCar(Car& Empl, char male)
{
	string model = Empl.GetModel();
	if (model != "none")
	{
		Empl.SetModel("none");
		Empl.SetMark("none");
		Empl.SetPrice(0);
		cout << "������ ��������� ����������" << endl;

		if (male == 'm')
			cout << "�� ������� ���, �� �� �� ��� ��� ������� ���" << endl << endl;
		else
			cout << "��� �������� ��� � ������ ����� �� ��������" << endl << endl;
	}
	else
	{
		cout << "���������� ��� ������" << endl << endl;
	}

	return Empl;
}

Salary& SevenDaysHol(Salary& Empl)
{	
	Empl.SetSecond(Empl.GetSecond() + 7);
	cout << "��������� ������� ����������� ������" << endl << endl;
	return Empl;
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Employee Jack("����", 'm');
	float first;
	int second;

	cin >> Jack;
	cout << Jack;

	DestroyCar(Jack, Jack.GetMale());
	cout << Jack;

	Employee Mayble("�����",'w');
	Mayble = Jack;
	cout << Mayble;
	DestroyCar(Mayble, Mayble.GetMale());
	SevenDaysHol(Mayble);
	cout << Mayble;
}