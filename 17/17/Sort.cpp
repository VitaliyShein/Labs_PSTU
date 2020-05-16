#include<iostream>
#include "Sort.h"
#include "File.h"
using namespace std;

void quickSort( int left, int right, DVD *numbers)
{
	int pivot;
	int l_hold = left;
	int r_hold = right;
	pivot = numbers[left].price;
	while (left < right)
	{
		while ((numbers[right].price >= pivot) && (left < right))
			right--;
		if (left != right)
		{
			numbers[left].price = numbers[right].price;
			left++;
		}
		while ((numbers[left].price <= pivot) && (left < right))
			left++;
		if (left != right)
		{
			numbers[right].price = numbers[left].price;
			right--;
		}
	}
	numbers[left].price = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)
		quickSort( left, pivot - 1, numbers);
	if (right > pivot)
		quickSort( pivot + 1, right, numbers);
}

void CountingSort(DVD* mas, int size, int range)
{
	int *var = new int[range];
	for (int i = 0; i < range; i++)
	{
		var[i] = 0;
	}

	for (int i = 0; i < size; i++)
	{
		var[mas[i].time] = var[mas[i].time] + 1;
	}


	int i = 0;

	for (int j = 0 ; j < range; j++)
	{
		while (var[j] != 0)
		{
			mas[i].time = j;
			var[j]--;
			i++;
		}
	}
}