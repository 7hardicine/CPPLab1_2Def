#include <iostream>
#include <locale>
#include <string>
using namespace std;

template <typename T>
T* GiveMemory(T* arr, int size)
{
	arr = new T[size];
	return arr;
}

template <typename T>
void FillArr(T* arr_start, int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << "arr[" << i + 1 << "] = ";
		cin >> *(arr_start + i);
	}
}

template <typename T>
void ShowArr(T* arr_start, int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << "arr[" << i + 1 << "] = " << *(arr_start + i) << endl;
	}
}

template <typename T>
void Replace(T* arr, int size)
{
	int index;
	cout << "Ёлемент с каким номером вы хотите заменить?" << endl;
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

	cout << "¬ведите размер массива: ";
	cin >> size;

	cout << "¬ыберите тип массива:" << endl << "1. Double" << endl << "2. Int" << endl;
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