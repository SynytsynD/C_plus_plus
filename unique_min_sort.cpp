#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	bool alreadyTher;

	for (int i = 0; i < SIZE;)
	{
		alreadyTher = false;
		int randvalue = rand() % 20;
		
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == randvalue)
			{
				alreadyTher = true;
				break;
			}
		}

		if (!alreadyTher)
		{
			arr[i] = randvalue;
			i++;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	int min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (min < arr[i])
		{
			continue;
		}
		min = arr[i];
		
	}

	cout << "\t min value: " << min << endl;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (arr[i] < arr[j])
			{
				int tmpvalue = arr[j];
				arr[j] = arr[i];
				arr[i] = tmpvalue;
				i--;
			}
		}
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}
