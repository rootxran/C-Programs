// Write a program to concatenate two arrays same size in such a way that 
// elements of first array place in concatenated array in odd order and
// elements of second array place in concatenated array in even order
// By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {6,7,8,9,10};
    int c[10];
    int first = 0, second = 0;
    cout << "First Array: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << "Second Array: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    for(int i = 0; i < 10; i++)
    {
        if(i % 2 == 0)//if i is even
        {
            c[i] = a[first];
            first++; 
        }
        else//if i is odd
        {
            c[i] = b[second];
            second++;
        }
    }
    cout << endl << "Concatenated Array: " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }

}
