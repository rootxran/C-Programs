//Write a program to enter numbers till user wants and at the end it should print positive, negative and zero counts
//By RAO ALI NAWAZ
#include<iostream>
using namespace std;
int main()
{
	int number, positive_numbers = 0, negative_numbers = 0, zero_numbers = 0;// declaring variables and initializing
	char pass= 'y';//intializing pass variable with 'y' so while loop starts
	while(pass == 'y' || pass == 'Y')
	{
		cout << "Enter any number: ";
		cin >> number;//storing input number to number variable
		if(number > 0)//number is positive
		{
			++positive_numbers;
		}
		else if(number < 0)//number is negative
		{
			++negative_numbers;
		}
		else//number is zero
		{
			++zero_numbers;
		}
		cout << "Do you want to continue (y/n)? ";
		cin >> pass;
	}
	//Printing counts of positive, negative and zero numbers
	cout << "__________________________" << endl;
	cout << "Positive numbers = " << positive_numbers << endl;
	cout << "Negative numbers = " << negative_numbers << endl;
	cout << "Zero numbers = " << zero_numbers << endl;
	cout << "__________________________" << endl;
	return 0;	
}



