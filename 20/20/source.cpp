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
		cout << "Машина работника уничтожена" << endl;

		if (male == 'm')
			cout << "Он немного зол, но всё же рад что остался жив" << endl << endl;
		else
			cout << "Она понимала что её машина долго не протянет" << endl << endl;
	}
	else
	{
		cout << "Уничтожать уже нечего" << endl << endl;
	}

	return Empl;
}

Salary& SevenDaysHol(Salary& Empl)
{	
	Empl.SetSecond(Empl.GetSecond() + 7);
	cout << "Работнику выделен семидневный отпуск" << endl << endl;
	return Empl;
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Employee Jack("Джек", 'm');
	float first;
	int second;

	cin >> Jack;
	cout << Jack;

	DestroyCar(Jack, Jack.GetMale());
	cout << Jack;

	Employee Mayble("Мейбл",'w');
	Mayble = Jack;
	cout << Mayble;
	DestroyCar(Mayble, Mayble.GetMale());
	SevenDaysHol(Mayble);
	cout << Mayble;
}