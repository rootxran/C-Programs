//Write a program to take 10 numbers from user using loop and then calculate average
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int number, sum = 0;//declaring variables and initializing sum variable to 0 because we have to add that to first number
	float average;//declaring average variable
	for(int i = 0; i < 10; i++)//intializing loop by 0 upto 10 and incrementing index by 1
	{
		cout << "Enter a number: ";
		cin >> number;//storing that user input number in number variable
		sum = sum + number;//adding that user input number to sum
	}
	average = sum / 10.0;//dividing sum by 10.0 to make it float divide
	cout << average << " is the average of numbers.";
	return 0;
}
