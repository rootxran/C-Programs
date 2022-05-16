// Write a program to declare an array of size 10 and initialize it with random numbers between -10 and 24.
// a)	Process array elements in loop to print the array in straight order.
// b)	Process array elements in loop to print the array in reverse order.
// BY RAO ALI NAWAZ
#include <iostream>
#include <cstdlib>//for using srand()
#include <ctime>//for using time()
using namespace std;
int main()
{
    int a[10];
    int temp;
    srand(time(NULL));//for avoiding same random numbers
    for(int i = 0; i < 10; i++)
    {
        a[i] = rand() % 35 - 10;//making condition for number between -10 and 24
    }
    cout << "Array with random numbers between -10 and 24" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    for(int i = 0; i < 10; i++)//rearranging elements in straight order
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;    
            }         
        }
    }
    cout << endl << "Array in straight order" << endl;
    for(int i = 0; i < 10; i++)//printing array in straight order
    {
        cout << a[i] << " ";
    }
    cout << endl << "Array in reverse order" << endl;
    for(int j = 9; j >= 0; j--)//printing array in reverse order
    {
        cout << a[j] << " ";
    }
}
