#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int size;
	vector<int> vec;
	cout << "������� ���������� ��������� �������" << endl;
	cin >> size;

	for (int i = 0, p; i < size; i++)
	{
		cout << "������� �������" << endl;
		cin >> p;
		vec.push_back(p);
	}

	sort(vec.begin(), vec.end());

	for (vector<int>::iterator i = vec.begin() ; i != vec.end(); i++)
	{
		cout << *i <<" ";
	}
}