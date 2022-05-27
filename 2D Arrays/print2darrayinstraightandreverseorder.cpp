// Write a program to create an array of size 5x5 first fill the array with random values between 1 and 100,
// print it in straight and reverse order. 
// Then fill that array from the user, print it in straight and reverse order.
// By RAO ALI NAWAZ
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void printarray(int a1[5][5])
{
    cout << endl << "Straight Array: " << endl;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << a1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Reverse Array: " << endl;
    for(int i = 4; i >= 0; i--)
    {
        for(int j = 4; j >= 0; j--)
        {
            cout << a1[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    srand(time(NULL));
    int a[5][5];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            a[i][j] = rand() % 100 + 1;
        }
    }
    printarray(a);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    printarray(a);
}
