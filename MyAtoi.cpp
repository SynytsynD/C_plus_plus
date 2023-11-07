#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using namespace std;

int MyAtoi(string *num);

int MyAtoi(string* num)
{
	int rezult = 0;
	int sumbol = 1;
	int i = 0;

	if (num->at(i) == '-')
	{
		sumbol = -1;
		i++;
	}

	for (; i < num->length(); ++i) 
	{
		rezult = rezult*10 + num->at(i) - '0';
	}

	return rezult*sumbol;
}

int main()
{
	string num;

	cout << "input value : ";
	cin >> num; 

	int rez = MyAtoi(&num);
	cout << "value + 100 = " << rez + 100;
	return 0;
}
