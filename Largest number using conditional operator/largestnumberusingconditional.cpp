//Write a program to find largest of three unequal numbers using conditional operator
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int number1, number2, number3, largest_number;
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;
	cout << "Enter third number: ";
	cin >> number3;
	if(number1 != number2 && number1!= number3 && number3 != number2)
	{
		largest_number = ((number1 > number2)? ((number1 > number3)? number1:number3):((number2 > number3)? number2:number3));
		cout << largest_number << " is the largest number.";
	}
	else
	{
		cout << "Enter unequal numbers.";
	}
	return 0;
}



