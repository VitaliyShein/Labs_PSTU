#include <iostream>
using namespace std;

int* ReadMas(int n, int *mas)
{
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}	
	return mas;
}

float* ReadMas(int n, float *mas)
{
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}
	return mas;
}

char* ReadMas(int n, char *mas)
{
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}
	return mas;
}

template <class T>
void PrintMas(int n, T* mas)
{
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl;
}

template <class T>
T* DeleteKey(int &n, T* mas)
{
	T key;
	cout << "Укажите ключ удаления элемента." << endl;
	cin >> key;

	T* TempMas = new T[n - 1];

	for (int k = 0, i = 0; i < n; i++)
	{
		if (mas[i] != key)
		{
			TempMas[k] = mas[i];
			k++;
		}
	}
	n--;
	delete[]mas;
	return TempMas;
}

void main()
{
	setlocale(LC_ALL, "rus");

	int n;
	cin >> n;

	int* mas = new int[n]; // Здесь можно поменять тип массива на int, float или char.
	mas = ReadMas(n,mas);
	PrintMas(n, mas);
	mas = DeleteKey(n, mas);
	PrintMas(n, mas);
}