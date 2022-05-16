// Take two integer arrays of size 5 each.
// Initialize both of them by any way you want. 
// Now append/concatenate both arrays and place into third array of size 10
// By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {6, 7, 8, 9, 10};
    int c[10];
    int j = 0;
    cout << "First Array: " << endl;
    //Printing First Array
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    } 
    cout << endl << "Second Array: " << endl;
    //Printing Second Array
    for(int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    //Concatenating two arrays
    // for(int i = 0; i < 5; i++)
    // {
    //     c[i] = a[i];
    //     j++;
    // }
    // for(int i = 0; i < 5; i++)
    // {
    //     c[j] = b[i];
    //     j++;
    // }
    for(int i = 0; i < 10; i++)
    {
        if(i < 5)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[j];
            j++;
        }
    }
    cout << endl << "Concatenated Array: " << endl;
    //Printing concatenated array
    for(int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }
    
}
