#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// copy arry to arry-------------------------------------------------------------------------------

int fill_arry(int const *arr, int const size);
int show_arry(int const* arr, int const size);

void fill_arry(int *const arr, int const size)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] = 10 + rand() % 90;
	}

}
void show_arry(int *const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

void main()
{

	int size = 5;

	int* arr1 = new int[size];
	int* arr2 = new int[size];


	fill_arry(arr1, size);
	show_arry(arr1, size);

	cout << endl;

	fill_arry(arr2, size);
	show_arry(arr2, size);

	delete []arr1;
	arr1 = nullptr;

	arr1 = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}

	cout << endl << endl;

	show_arry(arr1, size);
	cout << endl;
	show_arry(arr2, size);


	delete []arr1;
	arr1 = nullptr;

	delete []arr2;
	arr2 = nullptr;

//-------------------------------------------------------------------------------------------------

}