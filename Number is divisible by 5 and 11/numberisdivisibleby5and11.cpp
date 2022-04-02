//Write a program to take number from user and check whether that number is divisible by 5 and 11 or not
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	switch(number % 5)
	{
		case 0://if number is divisible by 5
		{
			switch(number % 11)
			{
				case 0: cout << number << " is divisible by 5 and 11."; break;//if number is also divisible by 5 and 11
				default: cout << number << " is not divisibe by 5 and 11."; break;//if number is divisible by 5 but not divisible by 11
			}
			break;
		}
		default: //if number is not divisible by 5 then we don't need to check whether it is divisible by 11 or not
		{
			cout << number << " is not divisible by 5 and 11."; break;
		}
		break;
	}
	return 0;
}
