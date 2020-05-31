#pragma once
#include <iostream>
using namespace std;

class String
{
	char* str;	// динамічний масив символів
	int length;	// довжина рядка

public:
	String() : length(0) // ініціалізація
	{
		cout << "Default Ctor 1 !!!\n";
		//length = 0;	// присвоєння
		str = nullptr;	// присвоєння
	}
	// size: 2 symb: '#' "##0"
	String(int count, char symb) : length(count)
	{
		cout << "Ctor 2 !!!\n";
		str = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			str[i] = symb;
		}
		str[length] = 0;
	}
	String(const char* str)
	{
		cout << "Ctor 3 !!!\n";
		length = strlen(str);
		this->str = new char[length + 1];
		strcpy_s(this->str, length + 1, str);
	}
	// copy constructor
	String(const String& other)
	{
		cout << "Copy ctor!!!\n";
		length = other.length;
		str = new char[length + 1];
		strcpy_s(str, length + 1, other.str);
	}
	
	~String()
	{
		cout << "Destructor!!!\n";
		delete[] str;
	}

	void Print() const;

	void Append(const char* str);

	void operator+=(const char* str);

	void operator+=(const String& str);

	String operator+(const String& str) const;

	bool operator==(const String& str) const
	{
		return (strcmp(this->str, str.str) == 0);
	}

	bool operator!= (const String& str) const
	{
		return (strcmp(this->str, str.str) !=0);
	}

	bool operator> (const String& str) const
	{
		return (strcmp(this->str, str.str) > 0);
	}
	bool operator< (const String& str) const
	{
		return (strcmp(this->str, str.str) < 0);
	}

	void operator*(const char* str);

};

