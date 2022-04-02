//Write a program to take two numbers and symbol of operator from user and then perform operation according to operator
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	float num1, num2;
	char operation;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter a operator: ";
	cin >> operation;
	switch(operation)
	{
		case '+':
		{
			cout << num1 + num2 << " is the answer."; 
			break;
		}
		case '-':
		{
			cout << num1 - num2 << " is the answer."; 
			break;
		}
		case '*':
		{
			cout << num1 * num2 << " is the answer.";
			break;
		}
		case '/':
		{
			cout << num1 / num2 << " is the answer.";
			break;
		}
		default: cout << "Enter valid operator.";
	}
	return 0;
}
