#pragma once
struct DVD
{
	char title[60];
	/*char producer [30];*/
	int time;
	int price;
};
void output();
void input(DVD* mas, int size, bool first = 0);