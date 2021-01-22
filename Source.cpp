#include <iostream>
#include <fstream>
#include <vector>
#include <conio.h>
using namespace std;

class Plentie
{
private:
	
public:
	vector <int> elements;
	Plentie()
	{
	}

	Plentie(int n)
	{
		int tmp;
		for (int i = 0; i < n; i++)
		{
			cout << "Введите данные через Enter: ";
			cin >> tmp;
			elements.push_back(tmp);
		}

	}

	Plentie(const Plentie& other)
	{
		vector <int> elements;
		for (int i = 0; i < other.elements.size(); i++)
			this->elements.push_back(other.elements[i]);
	}

	~Plentie()
	{
	}

	void operator=(Plentie &other)
	{
		this->elements.clear();
		for (int i = 0; i < other.elements.size(); i++)
			this->elements.push_back(other.elements[i]);
	}

	friend ostream& operator << (ostream& os, const Plentie& result);

	friend Plentie operator* (Plentie& left, Plentie& right);

	friend Plentie operator +(Plentie& left, Plentie& right);

	friend Plentie operator /(Plentie& left, Plentie& right);

	friend Plentie operator %(Plentie& left, Plentie& right);

	friend Plentie operator-(Plentie& other);
};

ostream& operator << (ostream& os, const Plentie& result)
{
	for (int i = 0; i < result.elements.size(); i++)
		os << result.elements[i] << " ";
	return os;
}

Plentie operator*(Plentie& left, Plentie& right)
{
	int leftSize = left.elements.size();
	int rightSize = right.elements.size();
	Plentie result;
	for (int i = 0; i < leftSize; i++)
	{
		for (int j = 0; j < rightSize; j++)
			if (left.elements[i] == right.elements[j])
			{
				result.elements.push_back(left.elements[i]);				
			}
	}

	right = result;
	return result;
}

Plentie operator +(Plentie& result, Plentie& right)
{
	int resultSize = result.elements.size();
	int rightSize = right.elements.size();
	for (int i = 0; i < rightSize; i++)
	{
		bool doAdd = 1;
		for (int j = 0; j < resultSize; j++)
		{
			if (result.elements[j] == right.elements[i])
			{
				doAdd = 0;
				break;
			}
		}
		if(doAdd)
			result.elements.push_back(right.elements[i]);
	}
	right = result;
	return result;
}

Plentie operator/(Plentie& left, Plentie& right)
{
	int leftSize = left.elements.size();
	int rightSize = right.elements.size();
	Plentie result;
	for (int i = 0; i < leftSize; i++)
	{
		bool doAdd = 1;
		for (int j = 0; j < rightSize; j++)
			if (left.elements[i] == right.elements[j])
			{
				doAdd = 0;
				break;
			}
		if (doAdd)
			result.elements.push_back(left.elements[i]);
	}
	right = result;
	return result;
}


Plentie operator%(Plentie& left, Plentie& right)
{
	Plentie result1 = left;
	Plentie result2 = right;

	result2 / result1;
	left / right;
	result1 + right;

	return right;
}

Plentie operator-(Plentie& other)
{
	int otherSize = other.elements.size();
	Plentie result;
	for (int i = -20; i <= 20; i++)
	{
		bool doAdd = 1;
		for (int k = 0; k < otherSize; k++)
			if (i == other.elements[k])
			{
				doAdd = 0;
				break;
			}

		if(doAdd)
			result.elements.push_back(i);
	}
	other = result;
	return result;
}

void Handle()
{
	int n; // Кол-во множеств. Каждое множество имеет свой номер
	cout << "Введите количество множеств:" << endl;
	cin >> n;
	Plentie* mn = new Plentie[n]; // Сами множества
	for (int i = 0; i < n; i++) // Определение(ввод) множеств
	{
		cout << "Введите количество элементов множества:" << endl;
		cout << "N = ";
		int quantity;
		cin >> quantity;
		for (int k = 0; k < quantity;)
		{
			bool doAdd = 1;
			cout << "Введите элемент множества(элементы не должны повторяться): ";
			int el;
			cin >> el;
			for (int j = 0; j < k; j++) // Проверка на повторение
			{
				if (mn[i].elements[j] == el)
				{
					doAdd = 0;
					break;
				}
			}
			if (doAdd)
			{
				k++;
				mn[i].elements.push_back(el);
			}				
		}
	}

	cout << "Сколько операций отрицания вы хотите провести?" <<endl;
	int denial_quant; // Кол-во отрицаемых множеств
	cin >> denial_quant; 
	int* denial_mn = new int[denial_quant]; // Номера отрицаемых множеств

	//Ввод номеров отрицаемых множеств
	if (denial_quant > 0) 
	{
		cout << "Введите номер множества над которым вы хотите провести опреацию ОТРИЦАНИЯ(счёт начинается с единицы)" << endl;
		
		for (int i = 0; i < denial_quant; i++)
		{
			cin >> denial_mn[i];
		}
	}

	char* operation = new char[n - 1]; // Массив операций
	cout << "Введите последовательно, через Enter, операции которые будут выполнятся над соответствующими множествами(вставляются между множествами)" << endl;
	cout << "Доступные операции:" << endl;
	cout << "`*` - И  \t(пересечение)" << endl;
	cout << "`+` - ИЛИ\t(объединение)" << endl;
	cout << "`/` - БЕЗ\t(разность)" << endl;
	cout << "`%` -    \t(симметрическая разность)" << endl;
	cout << "`-` - НЕ \t(отрицание)" << endl;

	for (int i = 0; i < n - 1; i++) // Ввод операций
		cin >> operation[i];

	// Печать конечного выражения
	if (denial_mn[0]-1 == 0)
		cout << "-";
	cout << '{' << mn[0]<< '}';

	{
		int k = 0; // номер операции отрецания для проверки
		for (int i = 1; i < n; i++)
		{

			if (denial_mn[k+1]-1 == i) // проверка на отрицание множества
			{
				k++;
				cout << operation[i - 1] << '-' << '{' << mn[i] << '}';
			}

			else
				cout << operation[i - 1] << '{' << mn[i] << '}';
		}
	}

	for (int i = 0; i < denial_quant; i++) // Сначала производится операция отрицания перед обработкой остальных операций
	{
		-mn[denial_mn[i] - 1];
	}

	for (int i = 0; i < n - 1; i++) // Выбирается операция
	{
		if (operation[i] == '*')
			mn[i] * mn[i + 1];
		if (operation[i] == '+')
			mn[i] + mn[i + 1];
		if (operation[i] == '/')
			mn[i] / mn[i + 1];
		if (operation[i] == '%')
			mn[i] % mn[i + 1];
		if (operation[i] == '-')
			- mn[i];
	}

	cout << "=" << '{' << mn[n - 1] << '}' << endl; // Вывод ответа
}

void main()
{
	setlocale(LC_ALL, "Russian");
	char ch;
	int code;
	while (1)
	{
		Handle();
		
		cout << "Нажмите клавишу Esc, чтобы выйти" << endl;
		cout << "Нажмите любую клавишу, чтобы продолжить" << endl;
		ch = _getch();
		if (ch == 27) // если клавиша esc
			exit(0);		
	}
	
}