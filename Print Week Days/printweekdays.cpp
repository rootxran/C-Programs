//Write a program to take number from user and print name of days according to that number using switch
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	switch(number)
	{
		case 1: cout << "Sunday"; break;
		case 2: cout << "Monday"; break;
		case 3: cout << "Tuesday"; break;
		case 4: cout << "Wednesday"; break;
		case 5: cout << "Thursday"; break;
		case 6: cout << "Friday"; break;
		case 7: cout << "Saturday"; break;
		default: cout << "Enter valid number from 1 to 7.";
	}
  return 0;
}
