// Write a program to print vertical graph using array
// By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 5, 4, 6, 2, 7, 9, 3, 6, 4};
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(a[j] >= 10-i)
            cout << "* ";
            else
            cout << "  ";
        }
        cout << endl;
    }
}
