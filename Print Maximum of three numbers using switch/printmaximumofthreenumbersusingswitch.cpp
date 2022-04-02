//Write a program to take three unequal numbers from user and print maximum numbers of three numbers using switch
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third numeber: ";
	cin >> num3;
	switch(num1 != num2 && num1 != num3 && num2 != num3)
	{
		case 1://if three numbers are unequal to each others
		{
			switch(num1>num2)
			{
				case 1://if first number is greater than second number
				{
					switch(num1 > num3)
					{
						case 1: cout << num1 << " is the maximum of three numbers."; break;
						case 0: cout << num3 << " is the maximum of three numbers."; break;
					}
					break;
				}
				case 0://if second number is greater than first number
				{
					switch(num2 > num3)
					{
						case 1: cout << num2 << " is the maximum of three numbers."; break;
						case 0: cout << num3 << " is the maximum of three numbers."; break;
					}
					break;
				}
			}
			break;
		}
		case 0: cout << "Enter unequal numbers."; break;
	}
	
	return 0;
}
