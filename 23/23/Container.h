#pragma once
#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* pNext;
};

class Container
{
protected:
	Node *pFirst;

public:
	Container()
	{		
	};

	Container(int data);

	class Iterator
	{
	protected:
		Node *iter;

	public:
		Iterator(Node* node)
		{
			iter = node;
		}

		Iterator& operator ++();
		Iterator operator ++(int);

		bool operator != (Node* right);

		int& get();
	};

	Node* start();
	Node* end();

	~Container();
	
	Container& pushfront(int data);
	Container& operator = (const Container& other);
	int& operator[](int index);
	int operator () (Container& obj);
	void operator + (int value);
	friend ostream& operator << (ostream &out,const Container& other);
	friend istream& operator >> (istream &in, Container& other);
};



