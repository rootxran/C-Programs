//Write a program to print multiplication of two matrix
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int a[3][3];
    int b[3][3];
    for(int i = 0; i < 3; i++)//initializing array a
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    for(int i = 0; i < 3; i++)//initializing array b
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Matrix A:" << endl;
    for(int i = 0; i < 3; i++)//printing array a after intializing
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matrix B:" << endl;
    for(int i = 0; i < 3; i++)//printing array b after intializing
    {
        for(int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Multiplication of two matrix: " << endl;
    for(int i = 0; i < 3; i++)//printing multiplication of array a and b
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            cout << sum << " ";
            sum = 0;
        }
        cout << endl;
    }
}
