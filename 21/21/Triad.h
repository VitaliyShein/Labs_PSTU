#pragma once
#include <iostream>
using namespace std;

class Triad
{
protected:
	int first, second, third;

public:
	
	Triad();
	virtual ~Triad();

	Triad(int first, int second, int third);
	Triad(const Triad&);

	int GetFirst() { return first; };
	int GetSecond() { return second; };
	int GetThird() { return third; };

	void SetFirst(int first);
	void SetSecond(int second);
	void SetThird(int third);

	Triad& operator= (const Triad&);

	 
	virtual void IncreaseFirst();
	virtual void IncreaseSecond();
	void IncreaseThird();
	virtual void Change(int first, int second, int third);

	friend ostream & operator<< (ostream&, const Triad&);
	friend istream & operator >> (istream &, Triad& );
};