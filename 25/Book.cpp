#include "Book.h"
#include <string>
Book::Book(void) :Print()
{
	pages = 0;
}
Book::~Book(void)
{

}
Book::Book(string n, string a, int page) :Print(n, a)
{
	pages = page;
}
Book::Book(const Book& m)
{
	name = m.name;
	author = m.author;
	pages = m.pages;
}
void Book::Set_pages(int page)
{
	pages = pages;
}
Book& Book::operator=(const Book& m)
{
	if (&m == this) return *this;
	name = m.name;
	author = m.author;
	pages = m.pages;
	return *this;
}
void Book::Show()
{
	cout << "\nName: " << name;
	cout << "\nAuthor: " << author;
	cout << "\nPages: " << pages;
	cout << endl;
}
void Book::Input()
{
	cout << "\nEnter name: "; cin >> name;
	cout << "\nEnter author: "; cin >> author;
	cout << "\nEnter pages: "; cin >> pages;
	cout << endl;
}