#include "point.h"
#include <iostream>
using namespace std;

struct List
{
	int data;
	List *next;
};

List *make_list(int n)
{
	List* beg;
	List *p, *f;
	beg = new(List);
	cin >> beg->data;
	p = beg;

	for (int i = 0; i < n - 1; i++)
	{
		f = new(List);
		cin >> f->data;
		f->next = NULL;
		p->next = f;
		p = f;
	}

	return beg;
}

void print_list(List* beg)
{
	List* p = beg;
	while (p != 0)
	{
		cout << p->data << "\t";
		p = p->next;
	}
	cout << endl;
}

List* delete_even(List* beg, int &n)
{
	setlocale(LC_ALL, "rus");

	List *p = beg;

	while ((p ->next) != nullptr && p->next->data % 2 != 0 )
	{
		p = p->next;
	}

	if (p->next == 0)
	{
		cout << "Чётных элементов не было найдено" << endl;
		return beg;
	}

	n--;

	List* f = p->next;//ставим указатель r на k-й элемент

	p->next = f->next;
	delete f;
	//удаляем k-й элемент из памяти

	return beg;
}