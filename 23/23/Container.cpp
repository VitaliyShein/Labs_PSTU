#include <iostream>
#include "Container.h"
using namespace std;


Container::Container(int data)
{
	this->pFirst->data = data;
}

Container& Container:: operator = (const Container& other)
{
	this->pFirst->data = other.pFirst->data;
	this->pFirst->pNext = other.pFirst->pNext;

	return *this;
}

void Container:: operator + (int value)
{
	Node *tmp = this->pFirst;
 
	while (tmp != NULL)
	{
		tmp->data += value;
		tmp = tmp->pNext;
	}
}

int Container:: operator () (Container& obj)
{
	int i = 1;
	Node *tmp = obj.pFirst;

	while (tmp->pNext != NULL)
	{
		i++;
		tmp = tmp->pNext;
	}

	return i;
}

int& Container:: operator[](int index)
{
	Node *temp = this->pFirst;
	for (int i = 0; i < index; i++)
	{				
		temp = temp->pNext;		
	}
	return temp->data;
}

ostream& operator << (ostream &out, const Container& other)
{
	out << other.pFirst->data << endl;
	return out;
}

istream& operator >> (istream &in, Container& other)
{
	in >> other.pFirst->data;
	return in;
}

Container::Iterator & Container::Iterator::operator++ ()
{
	iter = iter->pNext;
	return *this;
}

Container::Iterator Container::Iterator::operator++(int)
{
	Container::Iterator tmp = iter;
	iter = iter->pNext;
	return tmp;
}

Container& Container::pushfront(int data)
{
	Node* tmp = new Node;
	tmp->data = data;
	tmp->pNext = pFirst;
	this->pFirst = tmp;
	return *this;
}

int& Container::Iterator::get()
{
	return (iter->data);
}

bool Container::Iterator::operator!= (Node* right)
{
	return bool(iter != right);
}

Node* Container::start()
{
	return pFirst;
}

Node* Container::end()
{
	Node* tmp = pFirst;
	while (tmp != NULL)
	{
		tmp = tmp->pNext;
	}
	return tmp;
}

Container::~Container()
{
}
