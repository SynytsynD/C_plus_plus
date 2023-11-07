#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fibonacci(int number = 1, int& sum = 0, int& counter);

int fibonacci(int number = 1, int& sum = 0, int& counter)
{
	if (counter == 0)
	{
		return 0;
	}
	else if (counter == 1)
	{
		return 1;
	}
	else
		cout << sum << endl;
	return fibonacci(number + sum, number, --counter);

int main()
{
	int counter;
	cout << "input counter: ";
	cin >> counter;
  
fibonacci(counter);

return 0;
}
