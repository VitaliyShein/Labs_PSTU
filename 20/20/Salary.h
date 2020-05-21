#pragma once
#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

class Salary:public Car
{
private:
	float first;
	int second;

public:
	Salary()
	{
		first = 800.50;
		second = 20;
	};

	Salary(float first, int second)
	{
		this->first = first;
		this->second = second;
	};

	Salary(const Salary &other)
	{
		this->first = other.first;
		this->second = other.second;
	};

	~Salary()
	{
	};




	// Селекторы:
	float GetFirst()
	{
		return first;
	}

	void SetFirst(float first)
	{
		this->first = first;
	}

	int GetSecond()
	{
		return second;
	}

	void SetSecond(float second)
	{
		this->second = second;
	}
	// Конец селекторов

	float summa(int days = 30)
	{
		return ((first / days)*second);
	}
};

