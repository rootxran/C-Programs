//Write a program to check whether original and reverse numbers are equal or not
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int original_number, number, reverse, remainder;//declaring variables
	reverse = 0;//intializing reverse to 0 because we does not want out first remainder multiply to 10
	cout << "Enter any five digit number: ";
	cin >> original_number;//storing user input number to original_number variable
	number = original_number;//assigning value of original_number to number variable
	for(int i = 0; i < 5; i++)
	{
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number = number / 10;
	}
	if(reverse == original_number)//reverse number is equal to original_number
	{
		cout << "Original and reverse numbers are equal.";
	}
	else//reverse number is not equal to original number
	{
		cout << "Original and reverse numbers are not equal.";
	}
	return 0;
}



