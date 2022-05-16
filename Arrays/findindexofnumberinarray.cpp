// Write a program to find index of number in array
// By RAO ALI NAWAZ
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int a[10];
    int num = 48;
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100 + 1;
        cout << a[i] << " ";
    }
    int check = 0;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] == num)
        {
            cout << endl << i << " is the index of that number";
            check = 1;
        }
    }
    if(check == 0)
    {
        cout << endl <<  num << " is not present";
    }
}
