#include <iostream>
#include <deque>
#include <queue>
#include "Pair.h"
#include "List.h"
#include <list>
#include <Windows.h>
#include <iterator>
using namespace std;

void FirstEx()
{
	deque<int> d(2,1);
	int n; cout << "n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp; cout << "> "; cin >> tmp;
		d.push_back(tmp);
	}
	//d.push_back(4);
	//d.push_back(2);
	//d.push_back(7);
	//d.push_back(11);

	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";
	cout << endl;

	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";
	cout << endl;
	
	int max = d[0];
	for (int i = 0; i < d.size(); i++)
		if (max < d[i])
			max = d[i];
	d.push_front(max);

	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";
	cout << endl;
	

	int del;
	cout << "Delete element : " << endl;
	cin >> del;
	for (int i = 0; i < d.size(); i++)
		if (del == d[i])
			d.erase(d.begin()+i);

	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";
	cout << endl;

	for (int i = 0; i < d.size(); i++)
		d[i] *= max;

	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";
	cout << endl;
}

void SecondEx()
{
	list<Pair> l;
	Pair a;
	list<Pair>::iterator iter;

	int n;
	cout << "n = ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "¬ведите (int, double): ";
		cin >> a;
		l.emplace_back(a);
	}

	for (iter = l.begin(); iter != l.end(); iter++)
	{
		cout << *iter;
	}
	cout << endl;

	int max = l.front().GetFirst();
	for (iter = l.begin(); iter != l.end(); iter++)
	{
		if (max < iter->GetFirst())
			max = iter->GetFirst();
		if (max < iter->GetSecond())
			max = iter->GetSecond();
	}
	cout << "Max = "<< max << endl;
	a.SetFirst(max);
	a.SetSecond(max);
	l.push_front(a);

	int del;
	cout << "Delete ";
	cin >> del;

	for (iter = l.begin(); iter != l.end(); iter++)
	{
		if (del == iter->GetFirst())
		{
			l.erase(iter);
			break;
		}

		if (del == iter->GetSecond())
		{
			l.erase(iter);
			break;
		}
	}

	for (iter = l.begin(); iter != l.end(); iter++)
	{
		cout << *iter;
	}

	for (iter = l.begin(); iter != l.end(); iter++)
	{
		iter->SetFirst(iter->GetFirst()*max);
		iter->SetSecond(iter->GetSecond()*max);
	}

	cout << "After X max" << endl;
	for (iter = l.begin(); iter != l.end(); iter++)
	{
		cout << *iter;
	}
}

void ThirdEx()
{
	int n;
	int k;
	cout << "n = "; cin >> n;
	List<int> a(n);

	cout << a << endl;
	a.addMax();	cout << a << endl;
	cout << "delete element: "; cin >> n;
	a.delelteEl(n);	cout << a << endl;
	a.multiplyEl(); cout << a << endl;
}

void FourthEx()
{
	queue<int>q;
	int n, k;
	cout << "n = ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "¬ведите число: ";
		cin >> k;
		q.push(k);
	}

	int max = q.front();
	
		{
			queue<int> iter = q;
			for (int i = 0; i < q.size(); i++)
			{
				cout << iter.front() << " ";
				if (max < iter.front())
					max = iter.front();
				iter.pop();
			}
			cout << endl;
		}

		q.push(max);
		for (int i = 0; i < q.size()-1; i++)
		{
			q.push(q.front());
			q.pop();
		}

		{
			queue<int> iter = q;
			for (int i = 0; i < q.size(); i++)
			{
				cout << iter.front() << " ";
				iter.pop();
			}
		}
	
		cout << "delete element: ";
		cin >> n;
		{
			queue<int> iter = q;
			int size = q.size();
			for (int i = 0; i < size; i++)
			{
				if (iter.front() != n)									
					q.push(iter.front());					
				
					iter.pop();
					q.pop();				
			}

			cout << endl;
		}

		{
			queue<int> iter = q;
			for (int i = 0; i < q.size(); i++)
			{
				cout << iter.front() << " ";
				if (max < iter.front())
					max = iter.front();
				iter.pop();
			}
			cout << endl;
		}

		{
			queue<int> iter = q;
			int size = q.size();
			for (int i = 0; i < size; i++)
			{				
				q.push(iter.front()*max);

				iter.pop();
				q.pop();
			}

			cout << endl;
		}

		{
			queue<int> iter = q;
			for (int i = 0; i < q.size(); i++)
			{
				cout << iter.front() << " ";
				if (max < iter.front())
					max = iter.front();
				iter.pop();
			}
			cout << endl;
		}
}

void FifthEx()
{
	int n;
	int k;
	cout << "n = "; cin >> n;
	List<int> a(n);

	cout << a << endl;
	a.addMax();	cout << a << endl;
	cout << "delete element: "; cin >> n;
	a.delelteEl(n);	cout << a << endl;
	a.multiplyEl(); cout << a << endl;
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choice;
	cout << "Enter your choice: " << endl;
	cout << "1)First ex" << endl;
	cout << "2)Second ex" << endl;
	cout << "3)Third ex" << endl;
	cout << "4)Fourth ex" << endl;
	cout << "5)Fifth ex" << endl;
	cin >> choice;
	

	switch (choice)
	{
	case 1:
		FirstEx();
		break;
	case 2:
		SecondEx();
		break;
	case 3:
		ThirdEx();
		break;
	case 4:
		FourthEx();
		break;
	case 5:
		FifthEx();
		break;
	}
}