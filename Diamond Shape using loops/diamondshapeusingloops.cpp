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
    cin >> rows;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= 2 * rows - 1; j++)
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
    for(int i = 2; i <= rows; i++)
    {
        for(int j = 1; j <= 2 * rows - 1; j++)
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
