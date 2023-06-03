#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int factorial(int a);


int factorial(int a)
{
	if (a <= 1)
	{
		return 1;
	}
	return a * factorial(a - 1);
}

int main()
{

	int a = 5 ;

	cout << "input a: ";
	cin >> a;
	
	factorial(a);

	cout << factorial(a);

}



