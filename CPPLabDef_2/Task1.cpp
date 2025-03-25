#include <iostream>
#include <locale>
#include <string>
using namespace std;

template <typename T>
T* GiveMemoryT(T* arr, int size)
{
	arr = new T[size];
	return arr;
}

template <typename T>
void FillArrT(T* arr_start, int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << "arr[" << i + 1 << "] = ";
		cin >> *(arr_start + i);
	}
}

template <typename T>
void ShowArrT(T* arr_start, int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << "arr[" << i + 1 << "] = " << *(arr_start + i) << endl;
	}
}

template <typename T>
void ReplaceT(T* arr, int size)

{
	int index;
	cout << "Ёлемент с каким номером вы хотите заменить?" << endl;
	cin >> index;
	cout << "arr[" << index << "] = ";
	cin >> *(arr + index - 1);
	ShowArrT(arr, size);
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
		arr_double = GiveMemoryT(arr_double, size); 
		FillArrT(arr_double, size);
		ReplaceT(arr_double, size);
		break;
	}
	case 2:
	{
		arr_int = GiveMemoryT(arr_int, size); 
		FillArrT(arr_int, size);
		ReplaceT(arr_int, size);
		break;
	}
	}

	system("pause");
}