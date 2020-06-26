#pragma once
#include "Print.h"
using namespace std;

class Book :
	public Print
{
public:
	Book(void);
public:
	~Book(void);
	void Show();
	void Input();
	Book(string, string, int);
	Book(const Book&);
	int Get_pages() { return pages; }
	void Set_pages(int);
	Book& operator=(const Book&);
protected:
	int pages;
};
