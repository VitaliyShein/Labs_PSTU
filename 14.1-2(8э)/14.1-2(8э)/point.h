#pragma once

struct Point;
Point* make_point();
Point* make_list(int n);
Point* make_end(Point* beg);
void print_list(Point* beg);
Point* add_point(Point* beg, Point* end, int n);