#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int *AddArr(int &n)
{
	cout << "n = ";
	cin >> n;
	int *mass = new int[n];
	return mass;
}
void FillArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 201 - 100;
}

void PrintArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	cout << endl;
}

void AddValue(int *&arr, int &n)
{
	int *NewArr = new int[n + 1];
	int value;
	cin >> value;

	for (int i = n - 1; i >= 0; i--)
		NewArr[i + 1] = arr[i];

	n++;
	NewArr[0] = value;
	delete[] arr;
	arr = NewArr;
};

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int n, k;
	int *arr;
	arr = AddArr(n);
	FillArr(arr, n);
	PrintArr(arr, n);


	do
	{
		cout << "1.Формирование и заполнение массива\n";
		cout << "2.Печать массива\n";
		cout << "3.Добавление элемента в начало массива\n";
		cout << "4.Выход\n";
		cout << endl;

		cin >> k;

		switch (k)
		{
		case 1:
			arr = AddArr(n);
			FillArr(arr, n);
			break;

		case 2:
			PrintArr(arr, n);
			break;

		case 3:
			AddValue(arr, n);
			break;
		}



	} while (k != 4);
	delete[] arr;
}