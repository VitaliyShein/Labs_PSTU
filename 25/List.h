#pragma once
#include <iostream>
#include "Object.h"
#include "Book.h"
using namespace std;

class List
{
public:
	List();
	List(int);
public:

	~List(void);
	void Add();
	void Add(Object*);
	void Del();
	void Show();
	int operator()();
	void HandleEvent(const TEvent& e);

private:

	class Node
	{
	public:
		Node* pNext;
		Object* obj;

		Node(Object* obj, Node *pNext = NULL)
		{
			this->obj = obj;
			this->pNext = pNext;
		}
	};

protected:
	int size;
	Node* head;
};