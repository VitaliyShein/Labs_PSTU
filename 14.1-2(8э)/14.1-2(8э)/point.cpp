#include <iostream>
#include "point.h"

using namespace std;

struct Point
{
	char* data;
	Point* pred;
	Point* next;
};

Point* make_point()
{
	Point* p = new(Point);
	p->pred = 0;
	p->next = 0;
	char s[50];
	cout << "¬ведите элемент" << endl;
	cin >> s;
	p->data = new char[strlen(s) + 1];
	strcpy_s(p->data,50, s);
	return p;
}

Point* make_list(int n)
{
	Point *p, *beg, *f;
	beg = make_point();
	p = make_point();
	beg->next = p;

	for (int i = 2; i < n; i++)
	{		
		f = make_point();
		f->pred = p;
		p->next = f;
		p = f;
	}

	return beg;
}

Point* make_end(Point * beg)
{
	Point *end;
	end = beg;
	
	while (end->next != 0)
	{
		end = end->next;
	}

	return end;
}

void print_list(Point* beg)
{
	Point *p = beg;
	while (p != NULL)
	{
		cout << p->data << "\t";
		p = p->next;
	}
	cout << endl;
}

Point* add_point(Point* beg, Point* end, int n)
{	
	int add;

	cout << "¬ведите номер элемента который хотите добавить" << endl;
	do {
		
		cin >> add;
		if (add > n+1)
			cout << "¬ведЄнный номер не должен быть больше на 2 и более чем размера списка, введите номер ещЄ раз" << endl;
	} while (add > n+1);

	if (add == 0)
	{
		Point* p = make_point();
		p->next = beg;
		beg->pred = p;
		return p;
	}
	

	if (n / 2 >= add)
	{	
		Point* p = beg;
		for (int i = 0; i < add-1; i++)
		{
			p = p->next;
		}

		Point* f = make_point();;				
		f->next = p->next;
		f->pred = p;
		p->next = f;
	}

	else
	{
		Point* p = end;
		for (int i = n; i != add-1; i--)
		{
			p = p->pred;
		}

		Point* f = make_point();;
		f->next = p->next;
		f->pred = p;
		p->next = f;
	}

	return beg;
}