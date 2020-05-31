#include "String.h"
#include <iostream>
using namespace std;

void String::Print() const
{
	cout << str << endl;
}

void String::Append(const char* str)
{
	length = this->length + strlen(str);
	char* newStr = new char[length + 1];

	strcpy_s(newStr, length + 1, this->str);
	strcat_s(newStr, length + 1, str);

	delete[] this->str;
	this->str = newStr;
}

void String::operator+=(const char* str)
{
	length = this->length + strlen(str);
	char* newStr = new char[length + 1];

	strcpy_s(newStr, length + 1, this->str);
	strcat_s(newStr, length + 1, str);

	delete[] this->str;
	this->str = newStr;
}

void String::operator+=(const String& str)
{
	length = this->length + str.length;
	char* newStr = new char[length + 1];

	strcpy_s(newStr, length + 1, this->str);
	strcat_s(newStr, length + 1, str.str);

	delete[] this->str;
	this->str = newStr;
}

String String::operator+(const String& str) const
{
	String res(*this); // copy ctor
	res += str;
	return res;
}

//String String::operator*(const String& str)
//{
//	int length = strlen(this->str);
//	char* charArray1= new char [length + 1];
//	strcpy(this->str, length+1, charArray1);
//
//	for (int i = 0)
//
//}

void String::operator * (const char* str)
{
		char* newStr = new char[this->length + 1];
		for (int i = 0; i < this->length; i++) {
			for (int j = 0; j < strlen(str); j++) {
				if (this->str[i] == str[j]) {
					newStr[i] = this->str[i];
				}

			}
		}

		delete[] this->str;
		this->str = newStr;
}
