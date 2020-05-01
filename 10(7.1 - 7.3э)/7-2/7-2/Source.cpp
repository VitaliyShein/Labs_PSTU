#include <iostream>
using namespace std;

int Min1(int value, ...)
{
	int *p = &value;
	p++;

	int min = value;

	while (*p != 5)
	{
		if (*p < *(p - 1))
			min = *p;

		p++;
	}

	return min;
}

int Min2(int quantity, int value, ...)
{
	int min = value;
	int *p = &value;
	p++;

	for (; quantity != 0; quantity--)
	{
		if (*p < *(p - 1))
			min = *p;
		p++;
	}

	return min;
}

void main()
{
	cout << Min1(0, 1, 2, 3, 4, 5) << endl;

	
	cout << Min2(5, 1, 2, 3, 4, 5) << endl;
}