#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fibonacci(int number);

int fibonacci(int counter)
{
		if (counter == 0)
	{
		return 0;
	}
	else if (counter == 1)
	{
		return 1;
	}

	return fibonacci(counter - 1) + fibonacci(counter - 2);
}

int main()
{
	int counter;
	cout << "input counter: ";
	cin >> counter;

	for (int i = 0; i < counter; ++i)
	{
		cout << fibonacci(i) << "\n";
	}
  
	return 0;
}
