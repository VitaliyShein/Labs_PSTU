using namespace std;
#include <iostream>
#include <conio.h>



const int col = 8;
bool Map[8][8];
int x = 0, y = 0;

void Draw()
{	
	system("cls");

	cout << "Выберите строку" << endl;
	cout << "Управление:" << endl << "Вверх - стрелка вверх" << "Вниз - стрелка вниз\n" << endl;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{	
			if (Map[i][j] == 1)
			{
				cout << "1 ";
				Map[i][j] = 1;
			}

			else
			{
				cout << "0 ";
				Map[i][j] = 0;
			}

		}
		cout << endl;
	}
	cout << endl;
}

void Input()
{
	
	switch (_getch())
		{
		case 72:// Вниз
			Map[y][x] = 0;
			y--;
			Map[y][x] = 1;
			break;

		case 80: // Вверх
			Map[y][x] = 0;
			y++;
			Map[y][x] = 1;
			break;
		}
	
}



bool Possible(int x, int y)
{	
	for (int j = 0; j < 8; j++) // Проверка строки
	{
		if (j == x)
			continue;

		if (Map[y][j] == 1)
		{			
			return 0;
		}
	}

	{
		int i = x + 1, j = y + 1;
			for (; i < 8 && j < 8; i++, j++)
			{
				if (Map[j][i] == 1)
					return 0;
			}
	}

	{
		int i = x + 1, j = y - 1;
		for (; i < 8 && j >= 0; i++, j--)
		{
			if (Map[j][i] == 1)
				return 0;
		}
	}

	{
		int i = x - 1, j = y + 1;
		for (; i >= 0 && j < 8; i--, j++)
		{
			if (Map[j][i] == 1)
				return 0;
		}
	}

	{
		int i = x - 1, j = y - 1;
		for (; i >= 0 && j >= 0; i--, j--)
		{
			if (Map[j][i] == 1)
				return 0;
		}
	}

		return 1;
}

void Find(int x)
{
	if (x == 8)
	{
		Draw();
		exit(0);
	}

	for (int i = 0; i < 8; i++)// i = y
	{
		if (Possible(x, i))
		{
			Map[i][x] = 1;
			Draw();
			Find(x + 1);
			Map[i][x] = 0;
		}
	}		

	return;
}

void main()
{	
	setlocale(LC_ALL, "rus");
	Map[0][0] = 1;
	Draw();
	while (_getch() != 13)
	{
		if (_kbhit())
		{
			
			Input();
			Draw();
		}
	}

	Find(x+1);
}