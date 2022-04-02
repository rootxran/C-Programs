//Write a program to take number from user and then print week day according to that number using switch
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int number;//declaring variable
	cout << "Enter week day number: ";
	cin >> number;//storing input in to number variable
	switch(number)
	{
		case 1: cout << "Monday"; break;
		case 2: cout << "Tuesday"; break;
		case 3: cout << "Wednesday"; break;
		case 4: cout << "Thursday"; break;
		case 5: cout << "Friday"; break;
		case 6: cout << "Saturday"; break;
		case 7: cout << "Sunday"; break;
		default: cout << "Enter valid weed day number from 1 to 7.";
	}
	return 0;
}

