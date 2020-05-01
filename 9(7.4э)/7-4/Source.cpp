using namespace std;
#include <iostream>
#include <cmath>
#include <ctime>

float df(float x) // - производная функции
{
	return 0.2*x-log(x)-1;
}

float Root(float x, float e, float (*f)(float))
{
	float PreX = x;
	do
	{
		PreX = x;
		x = x - (f(x) / df(x));
	} while ((f(x) > e)&&fabs(PreX - x > e));

	return x;
}

float Equation(float x)
{
	return ((0,1*x*x) - x*log(x));
}



void main()
{
	srand(time(NULL));
	
	float x = rand() % 2 + 1;

	cout << Root(x, 0.0001, Equation);
}