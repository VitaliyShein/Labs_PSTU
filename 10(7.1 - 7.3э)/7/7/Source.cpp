#include <iostream>
#include <cmath>
using namespace std;

void Read(int& x1, int& x2, int& y1, int& y2) // Ввод координат двух точек
{


	cout << "Введите координаты первой точки" << endl;

	cout << "x1 = ";
	cin >> x1;

	cout << "y1 = ";
	cin >> y1;

	cout << "Введите координаты второй точки" << endl;

	cout << "x2 = ";
	cin >> x2;

	cout << "y2 = ";
	cin >> y2;
}

double Lenght(int x1 = 0, int x2 = 0, int y1 = 1, int y2 = 1) // нахождение расстояния между двумя точками
{
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

void main()
{
	setlocale(LC_ALL, "rus");

	int x1, x2, y1, y2;

	Read(x1, x2, y1, y2);

	cout << "Расстояние между двумя точками равно " << Lenght(x1, x2, y1, y2);

}