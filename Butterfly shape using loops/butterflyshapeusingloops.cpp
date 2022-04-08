//Write a program to print butterfly using loops
//By RAO ALI NAWAZ
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
#include <iostream>
using namespace std;
int main()
{
    int rows;//declaring rows variable
    cout << "Enter number of rows: ";
    cin >> rows;//storing user input into rows variable 
    for(int i = 1; i <= rows; i++)//half shape 
    {
        for(int j = 1; j <= 2 * rows; j++)
        {
            if(j> i && j <= 2 * rows - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for(int i = 1; i <= rows; i++)//inverted half shape
    {
        for(int j = 1; j <= 2 * rows; j++)
        {
            if(j> rows - (i - 1) && j <= rows + (i -1))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
