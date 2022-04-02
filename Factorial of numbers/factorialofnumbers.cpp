//Write a program to find factorial of positive numbers and also 0
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int number, factorial = 1;//initializing factorial to 1 so that in first iteration answer is not zero
	cout << "Enter a number: ";
	cin >> number;
	if(number == 0)//if number is zero
	{
		cout << "Factorial of 0 is 0";
	}
	else
	{
		for(int i = 1; i <= number; i++)
		{
			factorial = factorial * i;
		}
		cout << "Factorial of " << number << " is " << factorial;
	}
	return 0;
}
