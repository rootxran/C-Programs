//Write a program to take two numbers from user and then calculate sum after that tell user if he want to do repeat addition or not
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, sum;//declaring variables
	char repeat;//declaring variable repeat to repeat operation according to user input
	do
	{
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		sum = num1 + num2;
		cout << "Sum of two numbers is " << sum << endl;
		cout << "Do you want to repeat operation (y/n) ";
		cin >> repeat;
	}while(repeat == 'y' || repeat == 'Y');//making conditions for y and Y because other will be considered false
	return 0;
}
