//Write a program to take number from user and print fibonacci series up to that number
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 1, sum, number;//declairing variables and initializing a to 0 and b to 1 to start fibonacci series
	cout << "Enter a number to which you want to print series: ";
	cin >> number;//taking input from user and storing that in number variable
	while(number >= a)//comparing number to a to also print number
	{
		cout << a << "\t";//printing only (a) variable because it starts from 0 and it will contain all values in series
		sum = a + b;//adding value of a and b after that storing that in to sum
		a = b;//assigning value of b to a
		b = sum;//assigning value of sum to b
	}
	return 0;
}
