//Write a program to print even numbers from i to n using while loop
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int i, number;//declaring variables
	cout << "Enter a number: ";
	cin >> number;
    cout << "Enter a starting number: ";
    cin >> i;
	while(i <= number)
	{
		if(i % 2 == 0)//making condition if number(i) is divisible to 2
		{
			cout << i << endl;
		}
		i++;//incrementing i to avoid infinite loop
	}
	return 0;
}
