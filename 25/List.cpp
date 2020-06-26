#include "List.h"
#include "Book.h"

List::List()
{
	size = 0; 
	head = NULL;
}

List::List(int n)
{
	size = 0;
	head = NULL;
}

//List::List(int n)
//{
//	head->List::Node::obj = new Object [n];
//	size = n;
//}

List::~List(void)
{
}

void List::Add()
{
	Object* p;
	cout << "1. Print" << endl;


	Book* b = new Book;
	b->Input();

	if (head == NULL)
	{
		head = new Node(b);
	}

	else
	{
		Node *cur = head;

		while (cur->pNext != NULL)
		{
			cur = cur->pNext;
		}
		cur->pNext = new Node(b);
	}

	size++;
}

void List::Add(Object* o)
{
	Object* p = o;
	if (head == NULL)
	{
		head = new Node(o);
	}

	else
	{
		Node *cur = head;

		while (cur->pNext != NULL)
		{
			cur = cur->pNext;
		}
		cur->pNext = new Node(o);
	}

	size++;
}

void List::Show()
{
	if (head == NULL) cout << "Empty" << endl;
	Object** p = &head->obj;
	for (int i = 0; i < size; i++)
	{
		(*p)->Show();
		p++;
	}
}
int List::operator()()
{
	return size;
}
void List::HandleEvent(const TEvent& e)
{
	if (e.what == evMessage)
	{
		Object** p = &head->obj;
		for (int i = 0; i < size; i++)
		{
			(*p)->HandEvent(e);
			p++;
		}
	}
}
void List::Del()
{
	if (size == 0) return;
	size--;
}