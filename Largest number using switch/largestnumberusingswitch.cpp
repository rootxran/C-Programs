//Write a program to find largest of three unequal numbers using switch
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "Enter first number: ";
	cin >> num1;//storing first number into num1 variable
	cout << "Enter second number: ";
	cin >> num2;//storing second number into num2 variable
	cout << "Enter third number: ";
	cin >> num3;//storing third number into num3 variable
	switch((num1 != num2 && num1 != num3) && num2 != num3)//check whether numbers are unequal or not
	{
		case 1://if numbers are unequal
			{
				switch(num1>num2)//checking first number is greater than second number
				{
					case 1://if first number is greater than second number
					{
						switch(num1 > num3)//then check whether first number is greater than third number
						{
							case 1://if first number is greater than third number
								cout << num1 << " is largest.";
								break;
							case 0://if first number is not greater than third number
								cout << num3 << " is largest.";
								break;
						}
						break;
					}
					//if first number is not greater than second number
					case 0://which mean second number is greater than first number
					{
						switch(num2 > num3)//checking second number is greater than third number
						{
							case 1://if second number is greater than third number
							cout << num2 << " is largest.";
							break;
							case 0://if second number is not greater than third number
							cout << num3 << " is largest.";
							break;
						}
						break;
					}
				}
				break;
			}
		case 0://if numbers are not unequal
			cout << "Enter unequal numbers.";
			break;
	}
	return 0;
}



