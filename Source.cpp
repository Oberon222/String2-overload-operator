#include <iostream>
#include "String.h"
using namespace std;

void PrintString(String str) // виклик конструктора копіювання
{
	str.Print();
}

String CreatreString()
{
	String str("C++!");
	return str; // виклик конструктора копіювання
}

int main()
{
	/*String str1("Hello, programmer");
	str1.Print();

	String str2(3, '!');
	str2.Print();

	String str3(str1);
	str3.Print();

	str3.Append("Blablabla");
	str3.Print();
	str1.Print();

	PrintString(str1);
	String res = CreatreString();*/

	/*String str4("My string ");
	str4.Print();

	String str5("this my string!");
	str5.Print();

	String str6 = str4 + str5;
	str6.Print();*/
		
	String str1("Hello, programmer");
	String str2("Hello, mega programmer");
	str1 > str2;
	String str3;
	str3=str1 * str2;
	str3.Print();
	

	//str1.Append("end.");

	/*str1 += "end.";*/ // str1.operator+=("end.");

	/*str1.Print();

	str1 += str2;
	str1.Print();

	String str4 = str1 + str2;
	str4.Print();*/

	//str1 == str2;
	//str1 != str2;
	//
	//str1 > str2;
	//str1 < str2;

	system("pause");
	return 0;
} // desctructor invokation