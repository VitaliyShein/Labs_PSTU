#pragma once
#include "Triad.h"
using namespace std;

class Time :
	public Triad
{
public:
	Time()
	{
		seconds = first;
		minutes = second;
		hours = third;
	}

	Time(int seconds, int minutes, int hours):Triad(seconds, minutes, hours)
	{
		this->seconds = first;
		this->minutes = second;
		this->hours = third;
	}

	virtual ~Time();

	void Change(int first, int second, int third)
	{
		this->seconds = first;
		this->minutes = second;
		this->hours = third;
	}

	void IncreaseFirst() override
	{
		if (this->seconds == 59)
		{
			this->seconds = 0;
			IncreaseSecond();
		}
		else
			this->seconds++;
	}

	void IncreaseSecond() override
	{
		if (this->minutes == 59)
		{
			this->minutes = 0;
			this->hours++;
		}
		else
			this->minutes++;
	}

	void IncreaseMinSec(int min, int sec)
	{
		this->minutes += min;
		this->seconds += sec;
	}

	friend istream& operator >> (istream& in, Time& other)
	{
		in >> other.seconds >> other.minutes >> other.hours;
		return in;
	}

	friend ostream& operator << (ostream& out, Time& other)
	{
		out << other.hours << ":" << other.minutes << ":"<< other.seconds<<  endl << endl;
		return out;
	}

protected:
	int hours, minutes, seconds;
};


Time::~Time()
{
}