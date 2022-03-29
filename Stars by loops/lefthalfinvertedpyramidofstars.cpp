//Write a program to print left half inverted pyramid of stars by loops
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
			if(j >= 1 + (i - 1) && j <= n)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
}
