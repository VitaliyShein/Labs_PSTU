#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	string mark;
	string model;
	int price;
public:
	Car()
	{
		mark = "none";
		model = "none";
		price = 0;
	}

	Car(string mark, string model, int price)
	{
		this->mark = mark;
		this->model = model;
		this->price = price;
	}

	Car(const Car &other)
	{
		this->mark = other.mark;
		this->model = other.model;
		this->price = other.price;
	}



	~Car()
	{
	}

	Car & operator = (const Car& other) // ���������� ��������� ������������
	{
		this->model = other.model;
		this->mark = other.mark;
		this->price = other.price;
		return *this;
	}

	// ���������:
	string GetMark()
	{
		return mark;
	}

	void SetMark(string mark)
	{
		this->mark = mark;
	}

	string GetModel()
	{
		return model;
	}

	void SetModel(string model)
	{
		this->model = model;
	}

	int GetPrice()
	{
		return price;
	}

	void SetPrice(int price)
	{
		this->price = price;
	}
	// ����� ����������

	friend ostream & operator << (ostream& os, const Car &obj);
	friend istream & operator >> (istream &is, Car& obj);
};

ostream & operator << (ostream &os, const Car& obj)
{
	os << "������ ������" << obj.model << " " << "����� ������ " << obj.mark << " " << "���� ������ " << obj.price << endl;
	return os;
}

istream & operator >> (istream &is, Car& obj)
{
	is >> obj.model >> obj.mark >> obj.price;
	return is;
}