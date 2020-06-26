#pragma once
#include <iostream>
#include <deque>
using namespace std;
template <class T>
class List
{
public:
	//List(int s, T k);
	List(int n);
	List();
	//List(const List<T>& a);
	~List();
	//List& operator=(const List<T>& a);
	//T& operator[](int index);
	//List operator+(const T k);
	int operator()();
	T findMax();
	void addMax();
	void delelteEl(T el);
	void multiplyEl();

	queue<T> data;
	friend ostream& operator<< <>(ostream& out, List<T> a);
	//friend istream& operator>> <>(istream& in, List<T>& a);
	//void ThirdEx();
private:
	
};



template <class T>
void List<T>::multiplyEl()
{
	int size = data.size();
	int max = findMax();
	for (int i = 0; i < size; i++)
	{
		data.push(data.front()*max);
		data.pop();
	}
}

template <class T>
void List<T>::delelteEl(T el)
{
	int size = data.size();
	for (int i = 0; i < size; i++)
	{
		//int tmp = data.front();
		if (data.front() == el)
			data.pop();
		else
		{
			data.push(data.front());
			data.pop();
		}
	}
}



template <class T>
T List<T>::findMax()
{
	int max = data.front();
	int size = data.size();
	for (int i = 0; i < size; i++)
	{
		if (max < data.front())
			max = data.front();
		data.push(data.front());
		data.pop();
	}
	return max;
}

template <class T>
void List<T>::addMax()
{
	int size = data.size();
	data.push(findMax());
	for (int i = 0; i < size; i++)
	{
		this->data.push(data.front());
		data.pop();
	}
}

//template <class T>
//List<T>::List(int s, T k)
//{
//	size = s;
//	data = new T[size];
//	for (int i = 0; i < size; i++)
//		data[i] = k;
//}

//template <class T>
//List<T>::List(const List& a)
//{
//	data = new T[size];
//	for (int i = 0; i < size; i++)
//		data[i] = a.data[i];
//}

template <class T>
List<T>::~List()
{

}

template <class T>
List<T>::List()
{

}

template <class T>
List<T>::List(int n)
{
	T tmp;

	for (int i = 0; i < n; i++)
	{
		cout << "¬ведите число: ";
		cin >> tmp;
		data.push(tmp);
	}
	
}

//template <class T>
//List<T>& List<T>::operator=(const List<T>& a)
//{
//	if (this == &a)return *this;
//	if (data != 0) delete[]data;
//	data = new T;
//	for (int i = 0; i < size; i++)
//		data[i] = a.data[i];
//	return *this;
//}

//template <class T>
//T& List<T>::operator[](int index)
//{
//	if (index < size)
//	{
//		return data[index];
//	}
//	else cout << "\nError! Index>size";
//}

//template <class T>
//List<T> List<T>::operator+(const T k)
//{
//	List<T> temp();
//	for (int i = 0; i < this->data.size(); ++i)
//		temp.data[i] = data[i] + k;
//	return temp;
//}

template <class T>
int List<T>::operator ()()
{
	return data.size();
}

template <class T>
ostream& operator<< <>(ostream& out, List<T> a)
{
	{
		int size = a.data.size();
		for (int i = 0; i < size; i++)
		{
			out << a.data.front() << " ";
			a.data.push(a.data.front());
			a.data.pop();
		}
	}

	return out;
}
//
//template <class T>
//istream& operator>> (istream& in, List<T>& a)
//{
//	for (int i = 0; i < a.data.size(); ++i)
//		in >> a.data[i];
//	return in;
//}