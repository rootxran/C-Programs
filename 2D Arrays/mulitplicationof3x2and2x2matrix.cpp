//Write a program to multiply 3 x 2 matrix with 2 x 2 matrix
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a[3][2] = {{1,2}, {3,4}, {5,6}};
    int b[2][2] = {{1,2}, {3,4}};
    int c[3][2];
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sum = 0;
            for(int k = 0; k < 2; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}
