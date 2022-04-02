//Write a program to take number from user and print table of that number from 1 to 10
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	for(int i = 1; i <= 10; i++)//initializing loop by 1 up to 11 and incrementing index by 1
	{
		cout << number << " * " << i << " = " << number * i << endl;
	}
	return 0;
}
