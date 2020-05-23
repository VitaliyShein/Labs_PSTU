#include <iostream>
#include "Pair.h"
using namespace std;

void main()
{
	Pair a(1, 2.5);
	Pair b(2, 6.8);
	if (a > b)
		cout << "b>a" << endl;
	if (a < b)
		cout << "a>b" << endl;

	a = b;
	cout << a;
	cin >> a;

	a++;
	cout << a ;

	cout << b;
	++b;
	cout << b;
}