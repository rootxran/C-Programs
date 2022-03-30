//Write a program to print full star using loops
//By RAO ALI NAWAZ
//                             *
//                            ***
//                           *****
//                          *******
//                         *********
//                        ***********
//                       *************
//                      ***************
// ***********************************************************
//    *****************************************************
//       ***********************************************
//          *****************************************
//             ***********************************
//              *************** ****************
//             *************       *************
//            ***********             ***********
//           *********                   *********
//          *******                         *******
//         *****                               *****
//        ***                                     ***
//       *                                           *

#include <iostream>
using namespace std;
int main()
{  
	int rows = 23;
	int columns = 59;
	int n = 29;
	int p2 = 1;
	int p2c = 59;
	int p3 = 1;
	int n3 = 28;
	int ntoc = 15;
	int n4 = 29;
	int c = 0;
	for(int i = 1; i <= rows; i++)
	{
		if(i <= 8)
		{
			for(int j = 1; j <= columns; j++)
			{
				if(j >= n - (i - 1) && j <= n + (i - 1))
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		if(i > 8 && i < 14)
		{
			for(int k = 1; k <= columns; k++)
			{
				if(i == 14)
				{
					p2 = p2 - 1;
				}
				if((k >= p2 && k <= p2c) || i == 9)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				
			}
			p2 = p2 + 3;
			p2c = p2c - 3;
			cout << endl;
		}
		if(i >= 14 && i <= 25)
		{
			for(int l = 1; l <= columns; l++)
			{
				//using spaces in if
				if(i == 14)
				{
					if(l <= 13 || l >= 46 || (l >= n4 - c) && (l <= n4 + c))
					{
						cout << " ";
					}
					else
					{
						cout << "*";
					}
				}
				if(i > 14)
				{
					if((l < n4 - ntoc) || (l >= n4 - c) && (l <= n4 + c) || (l > n4 + ntoc))
					{
						cout << " ";
					}
					else
					{
						cout << "*";
					}			
				}
			}
			c = c + 3;
			ntoc++;
			cout << endl;
		}
	}
}

