//Write a program to print half same number row star using nested loop
//By RAO ALI NAWAZ
// 11111111
// 2222222 
// 333333  
// 44444   
// 5555    
// 666     
// 77      
// 8  
#include <iostream>
using namespace std;
int main()
{
    int rows = 8;
    int number = 1;
    for(int i = 1; i <= rows; i++)//Outer loop for rows
    {
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
        }
        number++;//incrementing number to print next number in next row
        cout << endl;//when one row is completed then go to next line for next rows rather than printing in previous row 
    }
    return 0;
}
