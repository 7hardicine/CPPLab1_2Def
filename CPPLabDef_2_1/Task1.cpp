#include <iostream>
#include <locale>
#include <string>
using namespace std;

int* GiveMemory(int* arr, int size)
{
	arr = new int[size];
	return arr;
}
double* GiveMemory(double* arr, int size)
{
	arr = new double[size];
	return arr;
}

void FillArr(int* arr_start, int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << "arr[" << i + 1 << "] = ";
		cin >> *(arr_start + i);
	}
}
void FillArr(double* arr_start, int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << "arr[" << i + 1 << "] = ";
		cin >> *(arr_start + i);
	}
}

void ShowArr(int* arr_start, int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << "arr[" << i + 1 << "] = " << *(arr_start + i) << endl;
	}
}
void ShowArr(double* arr_start, int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << "arr[" << i + 1 << "] = " << *(arr_start + i) << endl;
	}
}

void Replace(int* arr, int size)

{
	int index;
	cout << "Элемент с каким номером вы хотите заменить?" << endl;
	cin >> index;
	cout << "arr[" << index << "] = ";
	cin >> *(arr + index - 1);
	ShowArr(arr, size);
}
void Replace(double* arr, int size)

{
	int index;
	cout << "Элемент с каким номером вы хотите заменить?" << endl;
	cin >> index;
	cout << "arr[" << index << "] = ";
	cin >> *(arr + index - 1);
	ShowArr(arr, size);
}

void main()
{
	setlocale(LC_ALL, "rus");

	int* arr_int = 0;
	double* arr_double = 0;
	int size, type, index;

	cout << "Введите размер массива: ";
	cin >> size;

	cout << "Выберите тип массива:" << endl << "1. Double" << endl << "2. Int" << endl;
	cin >> type;
	switch (type)
	{
	case 1:
	{
		arr_double = GiveMemory(arr_double, size);
		FillArr(arr_double, size);
		Replace(arr_double, size);
		break;
	}
	case 2:
	{
		arr_int = GiveMemory(arr_int, size);
		FillArr(arr_int, size);
		Replace(arr_int, size);
		break;
	}
	}

	system("pause");
}