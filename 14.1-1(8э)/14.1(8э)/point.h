#pragma once
#include <iostream>
using namespace std;

struct List;

List *make_list(int n);

void print_list(List* beg);

List* delete_even(List* beg, int &n);
