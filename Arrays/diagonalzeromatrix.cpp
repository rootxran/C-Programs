//Write a program to make diagonal zero matrix
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int sum = 0;
    for(int i = 0; i < 3; i++)//printing matrix
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++)//making diagonal elements zero
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)
            {
                a[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < 3; i++)//printing diagnol zero matrix
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
