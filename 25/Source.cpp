#include <iostream>
#include "Tree.h"
#include "Print.h"
#include "Dialog.h"
#include "Book.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	cout << "m: ������� ������\n+: �������� �������\n-: ������� �������\ns: ���������� � ������ ������\n";
	cout << "z: ���������� � ��������� ��������� ������\nq: ����� ������\n";
	Dialog D;
	D.Execute();
}