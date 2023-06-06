#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void fillarr(int *arr, int *size);
void show_array(int *arr, int *size);
void show_array(int *arr, int *size, void(*sort_array)(int *, int *));
void sort_up(int *arr, int *size);
void sort_down(int *arr, int *size);

void fillarr(int *arr, int *size)
{	
	for (int i = 0; i < *size; i++)
	{
		arr[i] = 10 + rand() % 90;
	}
}

void show_array(int *arr, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		cout << *(arr + i) << endl;
	}
}

void show_array(int *arr, int *size, void(*sort_array)(int *, int *))
{
	sort_array(arr, size);
	for (int i = 0; i < *size; i++)
	{
		cout << *(arr + i) << endl;
	}
}

void sort_up(int *arr, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size; j++ )
		{
			if (arr[j] > arr[i])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp; 
			}
		}
	}
}

void sort_down(int *arr, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size; j++)
		{
			if (arr[j] < arr[i])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}


void main()
{
	int choose_sort = 0;
	int size = 0 ;
	
	cout << " input array size: ";
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	fillarr(arr, &size);
	show_array(arr, &size);
	
	cout << endl;
	cout << "select 1 for sort by descending" << endl;
	cout << "select 2 for sorting by growth" << endl;
	cout << "select: ";
	cin >> choose_sort;

	switch (choose_sort)
	{
		case 1:
			show_array(arr, &size, sort_down);
		break;

		case 2: 
			show_array(arr, &size, sort_up);
		break;
	}
	
	delete []arr;
	arr = nullptr;
}
