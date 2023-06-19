#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class mystring
{
	friend std::ostream& operator << (std::ostream& out, const mystring& other);
	friend std::istream& operator >> (std::istream& in, mystring& other);


public:
	mystring()
	{
		data = nullptr;
		length = 0;
	}

	mystring(const char *data)
	{
		length = strlen(data);
		this->data = new char[length + 1];
		
		for (int i = 0; i < length; i++)
		{
			this->data[i] = data[i];
		}

		this->data[length] = '\0';
	}

	mystring (const mystring& other)
	{
		length = strlen(other.data);
		this->data = new char[length + 1];

		for (int i = 0; i < length + 1; i++)
		{
			this->data[i] = other.data[i];
		}
	}

	mystring& operator = (const mystring& other)
	{
		if (this->data != nullptr)
		{
			delete[]this->data;
		}

		length = strlen(other.data);
		
		this->data = new char [length+1];

		for (int i = 0; i < length+1; i++)
		{
			this->data[i] = other.data[i];
		}
		return *this;
	}

	mystring operator + (const mystring& other)
	{
		mystring newdata;

		int size1 = strlen(this->data);
		int size2 =	strlen(other.data);

		newdata.length = size1 + size2;
		newdata.data = new char[newdata.length + 1];

		int i=0;
		for ( ; i < size1; i++)
		{
			newdata.data[i] = this->data[i];
		}

		for (int j = 0; j < size2; i++, j++)
		{
			newdata.data[i] = other.data[j];
		}

		newdata.data[newdata.length] = '\0';

		return newdata;
	}

	~mystring()
	{
		cout << "destructor" << this << endl;
		delete[]data;
	}

	int leng()
	{
		return length;
	}

	bool operator == (const mystring& other)
	{
		if (this->length != other.length)
		{
			return false;
		}
		for (int i = 0; i < length; i++)
		{
			if (this->data[i] != other.data[i])
			{
				return false;
			}	
			continue;
		}
		return true;
	}

	bool operator != (const mystring &other)
	{
		if (!(this->operator==(other.data)))
		{
			cout << "";
			return true;
		}
			cout << "";
			return false;
	}

	mystring (mystring &&other) noexcept
	{
		this->length = other.length;
		this->data = other.data;
		other.data = nullptr;
	}

private:
	char* data; 
	int length;
};

std::ostream& operator << (std::ostream& out, const mystring& other)
{
	return out << other.data;
}

std::istream& operator >> (std::istream& in, mystring &other)
{
	return in >> other.data;
}

int main()
{
	mystring data("hello");
	mystring data2("world!");
	mystring res = data + data2;

	bool resb = data != data2;
	cout << endl << data << endl;
	cout << "\tlength: " << res.leng() << endl;

	cin >> data;
	cout << endl << data << endl;

	return 0;
}