// Write a program to check whether a number is prime or not
//Prime number are the numbers which divide only by 1 and itself
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter any number: ";
	cin >> number;//storing user input number into number variable
	if(number == 1)//making condition for 1
	{
		cout << number << " is not prime.";//1 is not prime
	}
  //if number is not properly divided by 2 and 3 and give some remainder other than 0 then number is prime
	else if(number % 2 && number % 3)
	{
		cout << number << " is prime.";
	}
	// Making conditions for 2 and 3 prime numbers
	else if(number == 2 || number == 3)
	{
		cout << number << " is prime.";
	}
	else
	{
		cout << number << " is not prime.";
	}
	return 0;
}
