#pragma once
#include <iostream>
using namespace std;

class Pair
{
protected:
	int first;
	double second;

public:
	Pair()
	{
		first = 0;
		second = 0;
	}

	Pair(int first, double second)
	{
		this->first = first;
		this->second = second;
	}

	Pair(Pair& other)
	{
		this->first = other.first;
		this->second = other.second;
	}

	void SetFirst(int first)
	{
		this->first = first;
	}

	void SetSecond(double second)
	{
		this->second = second;
	}

	int GetFirst()
	{
		return first;
	}

	double GetSecond()
	{
		return second;
	}

	Pair & operator = (const Pair& other)
	{	
		this->first = other.first;
		this->second = other.second;
		return *this;
	}

	bool & operator > (const Pair& other)
	{
		bool c = 0;
		if ((this->first + this->second) > (other.first + other.second))
		{
			c = 1;
			return c;
		}
		else
			return c;
	}

	bool & operator < (const Pair& other)
	{
		bool c = 0;
		if ((this->first + this->second) < (other.first + other.second))
		{
			c = 1;
			return c;
		}
		else
			return c;
	}

	Pair& operator ++ ()
	{
		this->first++;
		return *this;
	}

	Pair& operator ++ (int)
	{
		Pair tmp(*this);
		this->second++;
		return tmp;
	}

	friend ostream & operator << (ostream& out, const Pair& other);
	friend istream & operator >> (istream& in, Pair& other);
	


	~Pair()
	{
	}
};



ostream &operator << (ostream& out, const Pair& other)
{
	out << other.first << ":" << other.second << endl << endl;
	return out;
}

istream &operator >> (istream& in, Pair& other)
{
	in >> other.first >> other.second;
	return in;
}	