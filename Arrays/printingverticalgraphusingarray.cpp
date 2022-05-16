// Write a program to print vertical graph using array
// By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 5, 4, 6, 2, 7, 11, 3, 6, 4};
    int max = 0;
    for(int i = 0; i < 10; i++)//finding maximum number in array
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    for(int i = 0; i < max; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(a[j] >= max-i)
            cout << "* ";
            else
            cout << "  ";
        }
        cout << endl;
    }
}
