#include "Search.h"
#include <iostream>
#include <fstream>
using namespace std;

struct Shift
{
	int carry;
	char sym;
};

Shift* CreateShift(char *word, int sizew) // Обратный массив символов с таблицей переноса
{

	Shift* shift = new Shift[sizew + 1];

	shift[0].sym = '*';
	shift[0].carry = sizew;
	shift[1].sym = word[sizew - 1];
	shift[1].carry = sizew;

	for (int sh = 2, w = sizew - 2; sh < sizew + 1; sh++, w--)
	{
		shift[sh].sym = word[w];
		shift[sh].carry = sh - 1;
		bool repeat = 0;

		for (int i = 0; i < sh; i++)
		{
			if (shift[i].sym == shift[sh].sym)
			{
				shift[sh].carry = shift[i].carry;
				break;
			}
		}


	}

	return shift;
}

int Slice(int Pos, Shift* shift, char fsym, int sizew) // Поиск символа в таблице смещения
{

	for (int j = 1; j < sizew + 1; j++)
	{
		if (shift[j].sym == fsym)
		{
			Pos += shift[j].carry;
			return Pos;
		}
	}

	Pos += shift[0].carry;
	return Pos;
}

void search() // Поиск заданной подстроки
{
	FILE* file;

	if ((fopen_s(&file, "DVD.txt", "a+")) != NULL) // Проверка открыт ли файл

	{
		// выводит строку символов с сообщением об ошибке

		perror("\nОшибка при открытии файла");

		exit(0);
	}

	char *word = new char; // Искомое название фильма
	cout << "Введите искомое слово " << endl;
	cin >> word;
	int sizew = 0;
	for (int i = 0; word[i] != NULL; i++)
		sizew++;

	Shift* shift = new Shift;
	shift = CreateShift(word, sizew);

	int Pos = sizew - 1; // Позиция курсора

	bool found = 0;

	while (!found && !feof(file))
	{
		fseek(file, Pos, 0);
		found = 1;

		for (int i = 1; i < sizew; i++)
		{
			char fsym = fgetc(file);
			fseek(file, Pos - i, 0);
			if (shift[i].sym != fsym)
			{
				Pos = Slice(Pos, shift, fsym, sizew);
				found = 0;
				break;
			}
		}
		fgetc(file);
	}

	if (found)
		cout << "Искомое слово было найдено" << endl;
	else
		cout << "Искомое слово НЕ было найдено" << endl;
}