//Write a program to print average of 10 numbers using while loop
#include <iostream>
using namespace std;
int main()
{
	int rows = 7, columns = 7;//initializing variables to 7
	for(int i = 1; i <= rows; i++)//outer loop for rows
	{
		for(int j = 1; j <= columns; j++)//inner loop for columns
		{
			if(j > i)//making condition for spaces
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;//to move to the next line
	}
  return 0;
}
