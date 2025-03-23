#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>
using namespace std;

void print(string surname = "÷елвовиков", string name = "ёрий", string patronymic = "≈вгеньевич")
{
	cout << surname << " " << name << " " << patronymic << endl;
}

void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	string p1, p2, p3;
	cout << "¬ведите фамилию:" << endl;
	cin >> p1;
	cout << "¬ведите им€:" << endl;
	cin >> p2;
	cout << "¬ведите отчество:" << endl;
	cin >> p3;

	print(p1, p2, p3);
	print();
	print(p1);
	system("pause");
}