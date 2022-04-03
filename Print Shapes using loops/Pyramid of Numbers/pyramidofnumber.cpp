//Write a program to print pyramid of spaced numbers using loops
//By RAO ALI NAWAZ
//      1 
//    2  3 
//   4  5  6 
//  7  8  9  10 
#include <iostream>
using namespace std;
int main()
{
    int rows = 4, number = 1;//declaring variables and initializing rows to 4 and number to 1
    for(int i = 1; i <= rows; i++)//outer loop for rows
    {
        for(int j = 1; j <= rows; j++)//inner loop for columns
        {
            if(j >= rows - (i - 1) && j <= rows + (i - 1))//making condition for printing numbers
            {
                cout << " " << number << " ";
                number++;//incrementing number
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
