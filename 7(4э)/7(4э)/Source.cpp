#include <iostream>
#include <ctime>
using namespace std;

void FillMas(int n, int* mas)
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 201 - 100;
	}
}

void PrintMas(int n, int *mas)
{
	for (int i = 0; i < n; i++)
		cout << *(mas + i) << " ";

	cout << endl;
}

int* DeleteEl(int &n, int* mas)
{
	n -= 5;
	int* NewMas = new int[n];
	for (int i = 0; i < n; i++)
	{
		NewMas[i] = mas[i];
	}

	delete[] mas;

	return NewMas;
}

int* AddEl(int& n, int* mas)
{
	n += 3;

	int* NewMas = new int[n];


	for (int i = 3; i < n; i++)
	{
		NewMas[i] = mas[i-3];
	}

	for (int i = 0; i < 3; i++)
	{
		NewMas[i] = mas[i + 1] + 2;
	}

	delete[] mas;

	return NewMas;
}

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int n;

	do
	{
		cout << "¬ведите размер массива(не меньше 9-ти):" << endl;
		cin >> n;
	} while (n < 9);

	int* mas = new int[n];

	FillMas(n, mas);
	PrintMas(n, mas);
	mas = DeleteEl(n, mas);
	mas = AddEl(n, mas);
	PrintMas(n, mas);
}