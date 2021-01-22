#include <iostream>
#include <conio.h>
using namespace std;

bool arr[25][25];
int n = 0;

bool IsReflect()
{
	for (int i = 0; (i < n) ; i++)
	{
		if (!arr[i][i])
		{
			return false;
		}
	}
	return true;
}

bool IsAntireflect()
{
	for (int i = 0; (i < n) ; i++)
	{
		if (arr[i][i])
		{
			return false;
		}
	}
	return true;
}

bool IsSimmert()
{
	for (int i = 0; (i < n) ; i++)
	{
		for (int j = 0; (j < n) ; j++)
		{
			if (i != j)
			{
				if (arr[i][j] != arr[j][i])
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool IsAntisimmetr()
{
	if (!IsReflect)
	{
		return false;
	}
	for (int i = 0; (i < n) ; i++)
	{
		for (int j = 0; (j < n) ; j++)
		{
			if (i != j)
			{
				if (arr[i][j] == arr[j][i])
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool IsAsimmetr()
{
	if (!IsAntireflect)
	{
		return false;
	}
	for (int i = 0; (i < n); i++)
	{
		for (int j = 0; (j < n); j++)
		{
			if (i != j)
			{
				if (arr[i][j] == arr[j][i])
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool IsTransitiv()
{
	for (int i = 0; (i < n); i++)
	{
		for (int j = 0; (j < n); j++)
		{
			if (arr[i][j])
			{
				for (int k = j; (k < n); k++)
				{
					if ((arr[j][k]) and !(arr[i][k]))
					{
						return false;
					}
				}
			}
		}
	}
	return true;
}

bool IsConnected()
{
	if (IsReflect() && IsSimmert() && IsTransitiv())
	{
		return true;
	}
	else 
		return false;
}



void CreateMatrix()
{
	cout << "������� ����������� �������: ";
	cin >> n;
	cout << "��������� �������� �������!" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{			
			if (arr[i][j] != 0)
			{
				arr[i][j] = 1;
			}
		}
	}

	cout << "�������� �������:" << endl;
	//�������� ����� �������
	cout << "  ";
	for (int i = 0; i < n; i++)
		cout << i + 1 << " ";
	cout << endl;
	cout << "  ";
	for (int i = 0; i < n+n/2; i++)
		cout << '-' ;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "|";
		for (int j = 0; j < n; j++)
		{			
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void Handle()
{
	cout << "������� �������� ����������:" << endl;
	if (IsReflect())
	{
		cout << " - ��������������" << endl;
	}

	if (IsAntireflect())
	{
		cout << " - ������������������" << endl;
	}

	if (IsSimmert())
	{
		cout << " - ��������������" << endl;
	}

	if (IsAntisimmetr())
	{
		cout << " - ������������������" << endl;
	}

	if (IsAsimmetr())
	{
		cout << " - ��������������" << endl;
	}

	if (IsTransitiv())
	{
		cout << " - ��������������" << endl;
	}

	if (IsConnected())
	{
		cout << " - ���������" << endl;
	}	
}

void main()
{
	char ch;
	do
	{ 
	setlocale(LC_ALL, "rus");
	CreateMatrix();
	Handle();
	
	cout << "������� Esc, ����� ���������� ���������" << endl;
	cout << "������� ����� ������ �������, ����� ����������" << endl;
	ch = _getch();
	if (ch == 27)
		exit(0);
	} while (1);
}