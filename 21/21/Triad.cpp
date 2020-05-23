#include "Triad.h"
#include <iostream>
#include <fstream>
using namespace std;

Triad::Triad()
{
	first = 0;
	second = 0;
	third = 0;
}

Triad::~Triad()
{
}

Triad::Triad(int first, int second, int third)
{
	this->first = first;
	this->second = second;
	this->third = third;
}

Triad::Triad(const Triad& other)
{
	this->first = other.first;
	this->second = other.second;
	this->third = other.third;
}

void Triad::SetFirst(int first)
{
	this->first = first;
}

void Triad::SetSecond(int second)
{
	this->second = second;
}

void Triad::SetThird(int third)
{
	this->third = third;
}

void Triad::IncreaseFirst()
{
	first++;
}

void Triad::IncreaseSecond()
{
	second++;
}

void Triad::IncreaseThird()
{
	third++;
}

void Triad::Change(int first, int second, int third)
{
	this->first = first;
	this->second = second;
	this->third = third;
}

Triad& Triad::operator= (const Triad& other)
{
	this->first = other.first;
	this->second = other.second;
	this->third = other.third;
	return *this;
}

istream &operator >> (istream &in, Triad& other)
{
	in >> other.first >> other.second >> other.third;
	return in;
}

ostream &operator << (ostream &out, const Triad& other)
{
	out << other.first << " " << other.second << " " << other.third << endl << endl;
	return out;
}