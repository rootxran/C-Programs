//Write a program to take 10 numbers from user using loop and then calculate average
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int number, sum = 0, i = 1;//declaring variables and initializing sum variable to 0 because we have to add that to first number
	float average;//declaring average variable
	while(i <= 10)
	{
		cout << "Enter a number: ";
		cin >> number;//storing that user input number in number variable
		sum = sum + number;//adding that user input number to sum
		i++;//incrementing value of i to avoid infinite loop
	}
	average = sum / 10.0;//dividing sum by 10.0 to make it float divide
	cout << sum << " is the sum of numbers." << endl;
	cout << average << " is the average of numbers.";
	return 0;
}
