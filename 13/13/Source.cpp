using namespace std;
#include <iostream>

int Fib(int n, int a = 1, int b = 0)
{
	if (n > 0)
	{
		int c = a;
		a += b;
		b = c;
		n--;

		return Fib(n, a, b);
	}
	else return a;
}

void main()
{
	int n;
	cin >> n;
	cout << Fib(n - 2);
}