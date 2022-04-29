//Write a program to print half number star using nestedloop
//By RAO ALI NAWAZ
// 12345678
// 1234567 
// 123456  
// 12345   
// 1234    
// 123     
// 12      
// 1  
#include <iostream>
using namespace std;
int main()
{
    int rows = 8;
    int number;
    for(int i = 1; i <= rows; i++)//Outer loop for rows
    {
        number = 1;//in every iteration updating value of number variable to 1
        for(int j = 1; j <= rows; j++)//inner loop for columns
        {
            if(j <= rows - (i - 1))
            {
                cout << number;
            }
            else
            {
                cout << " ";
            }
            number++;//incrementing number to print number series in column
        }
        cout << endl;//when one row is completed then go to next line for next rows rather than printing in previous row 
    }
    return 0;
}
