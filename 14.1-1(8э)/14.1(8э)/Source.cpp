#include <iostream>
#include "point.h"
using namespace std;

void main()
{
	int n;
	List *beg;
	cin >> n;
	beg = make_list(n);
	print_list(beg);
	beg = delete_even(beg,n);
	print_list(beg);
}