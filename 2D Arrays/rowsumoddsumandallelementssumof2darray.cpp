//Write a program to print all elements sum and rows sum
//odd row and column elements sum
//By RAO ALI NAWAZ
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int a[5][5];
    int sum = 0;
    int oddsum = 0;
    int rowsum[5] = {0};
    srand(time(NULL));
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            a[i][j] = rand() % 10 + 1;
            sum = sum + a[i][j];
        }
    }
    cout << "Generated Matrix :" << endl;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Sum of all elements of matrix is " << sum << endl;
    cout << "Sum of row elements of matrix : ";
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            rowsum[i] = rowsum[i] + a[i][j];
        }
        cout << rowsum[i] << " ";
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if((i % 2 == 1)  && (j % 2 == 1))
            {
                oddsum = oddsum + a[i][j];
            }
        }
    }
    cout << endl << "Sum of odd row and column number is " << oddsum;
}
