// Write a program to show transpose of 4 x 4 matrix 
// Fill it with random values from 1 to 100.
// By RAO ALI NAWAZ
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void printmatrix(int a[4][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    srand(time(NULL));
    int a[4][4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            a[i][j] = rand() % 100 + 1;
        }
    }
    cout << endl << "Generated Array :" << endl << endl;
    printmatrix(a);
    cout << endl << "Transposed Array :" << endl << endl;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            a[i][j] = a[j][i];
        }
    }
    printmatrix(a);
}
