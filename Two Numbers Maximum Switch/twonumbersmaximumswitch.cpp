//Write a program to find maximum of two numbers using switch
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, compare;//declaring variables
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	compare = num1 < num2;//comparing two numbers and storing boolean value in compare variable
  //switch(num1 < num2) will do same as compare but in switch condition it is not good to use boolean condition
  //because we need variety in that condition values so that we can make different cases rather that 1 and 0 cases
  //that is why we use switch statement rather than if else
	switch(compare)
	{
		case 0: cout << num1 << " is maximum of two numbers."; break;
		case 1: cout << num2 << " is maximum of two numbers."; break;
		default: break;
	}
  return 0;
}
