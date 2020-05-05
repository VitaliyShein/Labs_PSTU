#include <iostream>
#include "point.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	Point* beg;
	Point* end;

	cout << "¬ведите размер списка" << endl;
	cin >> n;

	beg = make_list(n);
	end = make_end(beg);
	print_list(beg);
	beg = add_point(beg, end, n);
	print_list(beg);
}