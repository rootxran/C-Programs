//Write a program to print left half inverted pyramids using loops also spaces in if condition
#include <iostream>
using namespace std;
int main()
{
//	 *****
//	  ****
//	   ***
//	    **
//	     *
	int n = 5;// 5 rows
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= 2 * n - 1; j++)
		{
			if(j <= i - 1 || j > 5)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
}
