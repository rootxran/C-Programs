//Write a program to print x shape for same no of rows and columns using nested loop
//By RAO ALI NAWAZ
// *     *
//  *   * 
//   * *  
//    *   
//   * *  
//  *   * 
// *     * 
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter a number: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++)//Outer loop for rows
    {
        for(int j = 1; j <= rows; j++)//inner loop for columns
        {
            if(j == i || j == rows - (i - 1))//conditon for printing x shape
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;//when one row is completed then go to next line for next rows to avoid printing in same line 
    }
    return 0;
}
