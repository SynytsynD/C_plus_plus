#include <iostream>

using namespace std;

void main()
{

	int width = 0; 
	int height = 0;
	cout << "input width: ";
	cin >> width;
	cout << "input height: ";
	cin >> height;

	for (int i = 0; i < height; i++) 
	{
		cout << "\n";
		
		for (int j = 0; j < width; j++)
		{

			if (i == 0 || i == height - 1)
			{
				cout << "*";
			}
			else if (i > 0 || i < height - 1)
			{
				if (j == 0)
				{
					cout << "*";
				}
				else if (j == width - 1) 
				{
					cout << "*";
				}
				else 
				{
					cout << " ";
				}
			}
		}
	
	}

}
