#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void fill_array(int *const arr, int const size);
void show_array(int* const arr, int const size);
void increase_array(int *&arr, int &size);

void fill_array(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 10 + rand() % 90;
	}
}

void show_array(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}

void increase_array(int *&arr, int &size)
{
	int increase_value = 0;
	int placment_in_array = 0;

	cout << "input increase value: ";
	cin >> increase_value;
	cout << endl << "setup placment in array: ";
	cin >> placment_in_array;
	
	int counter = increase_value;
	int *newarr = new int[size + increase_value];

	for (int i = 0; i < size + increase_value; i++)
	{
		if (i < placment_in_array)
		{
			newarr[i] = arr[i];
			continue;
		}

 		if (i == placment_in_array)
		{
			for (i = placment_in_array; i < placment_in_array + increase_value; i++)
			{
				cout << "intput value #" << counter-- << " : ";
				cin >> newarr[i];	
			}
		}
		newarr[i] = arr[i-increase_value];
	}

	delete[]arr;
	arr = nullptr;

	size += increase_value;
	arr = newarr;

}


void main()
{
	int size = 5;

	int* arr = new int[size];

	fill_array(arr, size);
	show_array(arr, size);
	increase_array(arr, size);
	show_array(arr, size); 

	delete []arr;
	arr = nullptr;
}