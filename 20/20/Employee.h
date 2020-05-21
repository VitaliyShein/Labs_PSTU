#pragma once
#include <iostream>
#include <string>
#include "Salary.h"
#include <fstream>
using namespace std;

class Employee : public Salary
{
private:
	string Name;
	char male;

public:

	Employee(float first, int second) : Salary()
	{
	}

	Employee(string Name, char male)
	{
		this->Name = Name;
		this->male = male;
	}


	Employee &operator = (Employee& other)
	{

		this->SetFirst(other.GetFirst());
		this->SetSecond(other.GetSecond());
		this->SetModel(other.GetModel());
		this->SetMark(other.GetMark());
		this->SetPrice(other.GetPrice());

		return *this;
	}

	string GetName()
	{
		return Name;
	}

	char GetMale()
	{
		return male;
	}
	
	friend ostream &operator << (ostream& os, Employee& obj);
	friend istream &operator >> (istream& is, Employee& obj);

};

ostream &operator << (ostream& os, Employee& obj) // ���������� ������
{
	float first = obj.GetFirst();
	int second = obj.GetSecond();
	string mark = obj.GetMark();
	string model = obj.GetModel();
	float price = obj.GetPrice();
	os << obj.Name << endl;
	os << "����� " << first << endl << "���������� ������������ ���� " << second << endl;
	os << "����� ������ " << mark << endl << "������ ������ " << model << endl << "���� ������ " << price << endl << endl;

	return os;
}

istream &operator >> (istream& is, Employee& obj) // ���������� �����
{
	cout << "������� ����� � ���������� ������������ ���� ����� ����� ������:" << endl;
	float first;
	int second;

	is >> first >> second;
	obj.SetFirst(first);
	obj.SetSecond(second);
	
	cout << "������� ����� ������ ����� ������ ��������� � ����� ������ � ���� ������ (���� ������ ��� ������� << ��� >>)" << endl;	
	string model;
	string mark;
	float price;	

	is >> model;

	if (model != "���")
	{
		obj.SetModel(model);
		is >> mark >> price;
		obj.SetMark(mark);
		obj.SetPrice(price);
	}
	return is;
}