//Write a program to check triangle is valid or not
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int angle1, angle2, angle3, sum;//declaring variables with int data type
	cout << "Enter values of three angles: ";
	cin >> angle1 >> angle2 >> angle3;//storing user input values into variables
	sum = angle1 + angle2 + angle3;//taking sum of all three angles
	if(sum == 180)//if sum is equal to 180
	{
		cout << "Triangle is valid";
	}
	else//if sum is not equal to 180
	{
		cout << "Triangle is not valid";
	}
	return 0;
}



