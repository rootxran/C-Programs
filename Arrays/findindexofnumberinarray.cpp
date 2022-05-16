// Write a program to find index of number in array
// By RAO ALI NAWAZ
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int a[10];
    int num;
    srand(time(NULL));
    cout << "Generated Array: ";
    for(int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100 + 1;
        cout << a[i] << " ";
    }
    cout << endl << "Enter a number: ";
    cin >> num;
    int check = 0;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] == num)
        {
            cout << endl << i << " is the index of that number";
            check = 1;
            break;
        }
    }
    if(check == 0)
    {
        cout << endl <<  num << " is not present";
    }
    return 0;
}
