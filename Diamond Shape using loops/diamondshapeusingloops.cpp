//Write a program to print diamond shape for any number of rows using loops
//By RAO ALI NAWAZ
//     *    
//    ***   
//   *****  
//  ******* 
// *********
//  ******* 
//   *****  
//    ***   
//     *    
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;//storing input into rows variable
    for(int i = 1; i <= rows; i++)//outer loop for rows
    {
        for(int j = 1; j <= 2 * rows - 1; j++)//inner loop for columns
        {
            if(j >= rows - (i - 1) && j <= rows + (i - 1))
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
    //making inverted pyramid of stars
    for(int i = 2; i <= rows; i++)//initializing index to 2 because we do want another full star row
    {
        for(int j = 1; j <= 2 * rows - 1; j++)//inner loop for columns
        {
            if(j >= i && j <= 2 * rows - i)
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
    return 0;
}
